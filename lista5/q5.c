#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define FIM 100


void preencher_vetor(float *vet, int tam, int inicio, int final);
void imprimir_vetor(float *vet, int tam);
void somar_vetor(float *v, int tam);

int main(int argc, char* argv[]){
    int tam;
    float *v=NULL;

    tam = atoi(argv[1]);

    if(!(v = (float*)malloc(tam * sizeof(int)) )){
        puts("Sem memória!");
        return 1;
    }

    preencher_vetor(v, tam, INI, FIM);
    imprimir_vetor(v, tam);
    puts(" ");
    somar_vetor(v, tam);
    puts(" ");

    free(v);
    
    return 0;
}

void preencher_vetor(float *vet, int tam, int inicio, int final){
    srand(time(NULL));
    for(int i=0; i<tam; i++){
        *(vet+i) = inicio + rand() % final;
    }
}

void imprimir_vetor(float *vet, int tam){
    for(int i=0; i<tam; i++){
        printf("%.2f ", *(vet+i));
    }
}

void somar_vetor(float *v, int tam){
    float soma=0;
    for(int f=0; f<tam; f++){
        soma += *(v+f);
    }
    printf("%.2f ", soma);
}

