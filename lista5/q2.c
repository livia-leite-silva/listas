#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define FIM 100

void preencher_vetor(int *vetor, int tam, int inicio, int final);
void imprimir_vetor(int *vetor, int tam);
int *minor_adress(int *v, int tam);

int main(int argc, char *argv[]){
    int unsigned tam;

    tam = atoi(argv[1]);

    int vet[tam];
    int *v=vet;
    
    if(!(v = malloc(tam * sizeof(int)))){
        puts("Sem memória!");
        exit(1);
    }
    
    preencher_vetor(v,tam,INI,FIM);
    imprimir_vetor(v, tam);

    puts("-------");
    printf("[%p]\n", minor_adress(v,tam));

    free(v);
    
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
int *minor_adress(int *vetor, int tam){
    int *pmenor = vetor;

    for (int i=1; i<tam; i++){
        pmenor = ( *(vetor+i) < *pmenor)? vetor+i : pmenor;
    }
    return pmenor;
}