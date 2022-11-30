#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void somatorio_dig_principal(int *v, int tam);
void preencher_matriz(int *v, int tam, int ini, int fim);
void imprimir_matriz(int *v, int tam);

#define N 5
#define INI 0
#define FIM 10


int main() {
    int *matriz = NULL;

    if(!(matriz = malloc(N * N * sizeof(int)))){
        printf("no memory.");
        exit(1);
    }

    preencher_matriz(matriz, N*N, INI, FIM);
    puts("\nMATRIZ\n");
    imprimir_matriz(matriz, N);

    somatorio_dig_principal(matriz, N);

    return 0;
}

void preencher_matriz(int *v, int tam, int ini, int fim){

    srand(time(NULL));

    for(int i=0; i<tam; i++){
        *(v + i) = ini + rand() % fim; 
    }
}

void imprimir_matriz(int *v, int tam){
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            printf("%d ", *(v+ i*tam +j));
        }
        printf("\n");
    }
}

void somatorio_dig_principal(int *v, int tam){
    int soma = 0;
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            if(i == j){
                soma += *(v + (i * tam) + j);
            }
        }
    }
    if (soma % 2 == 0){
        printf("\nSoma diagonal principal é %d.\nPAR!\n\n", soma);
    }else{
        printf("\nSoma diagonal principal é %d.\nÍMPAR!\n\n", soma);
    }
}