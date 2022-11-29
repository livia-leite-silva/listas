#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define FIM 100

void preencher_vetor(int *vetor, int tam, int inicio, int final);
void imprimir_vetor(int *vetor, int tam);
int *menor_endereco(int *v, int tam);
int *maior_endereco(int *vetor, int tam);

int main(int argc, char *argv[]){
    int unsigned tam;
    int *v;

    tam = atoi(argv[1]);

    if(!(v = (int*)malloc(tam * sizeof(int)))){
        puts("Sem memória!");
        exit(1);
    }

    preencher_vetor(v,tam,INI,FIM);
    imprimir_vetor(v, tam);

    puts("-------");
    printf("endereço do menor: %p\n", menor_endereco(v,tam));
    printf("endereço do maior: %p\n", maior_endereco(v,tam));

    return 0;
}


void preencher_vetor(int *vetor, int tam, int inicio, int final){
    srand(time(NULL));

    for(int i=0; i<tam; i++){
        *(vetor+i) = inicio + rand() % final;
    }
}
void imprimir_vetor(int *vetor, int tam){
    for(int i=0; i<tam; i++){
        printf("[%p] %d\n", vetor+i, *(vetor+i));
    }
}
int *menor_endereco(int *vetor, int tam){
    int *pmenor = vetor;

    for (int i=1; i<tam; i++){
        pmenor = ( *(vetor+i) < *pmenor)? vetor+i : pmenor;
    }
    return pmenor;
}
int *maior_endereco(int *vetor, int tam){
    int *pmaior = vetor;

    for (int i=1; i<tam; i++){
        pmaior = ( *(vetor+i) > *pmaior)? vetor+i : pmaior;
    }
    return pmaior;
}