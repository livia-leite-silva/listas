#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define INI 0
#define FIM 10

void vetor_aleatorio(float *, int, int, int);
void imprimir_vetor(float *, int );
void min_max_normalization(float *, float *, int);

int main() {
    float X[TAM], Y[TAM];

    vetor_aleatorio(X, TAM, INI, FIM);

    puts("\nVetor aleatório: ");
    imprimir_vetor(X, TAM);

    min_max_normalization(X, Y, TAM);

    puts("\n\nNormalização de dados min-max: ");
    imprimir_vetor(Y, TAM);

    puts("\n");

    return 0;
}

void vetor_aleatorio(float *vetor, int tam, int inicio, int final){
    srand(time(NULL));

    for(int i=0; i<tam; i++){
        *(vetor + i) = inicio + rand() % final; 
    }
}

void imprimir_vetor(float *vetor, int tam){
    for(int i=0; i<tam; i++){
        printf("%.2f ", *(vetor+i));
    }
}

void min_max_normalization(float *v, float *vnovo, int tam){

    float min= *v, max=0;

    for(int i=0; i<tam; i++){
        if(*(v+i) > max){
            max = *(v+i);
        }
        if(*(v+i) < min){
            min = *(v+i);
        }
    }

    for(int j=0; j<tam; j++){
        *(vnovo + j) = (*(v+j) - min)/(max - min);
    }
}