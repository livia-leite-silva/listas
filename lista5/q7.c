#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vetor_aleatorio(float *vetor, int tam, int inicio, int final);
void imprimir_vetor(float *vet, int tam);
void EQM(float *v1, float *v2, float *vrecebe, int tam);

#define N 3
#define INI 0
#define FIM 8

int main() {
    srand(time(NULL));

    float v1[N], v2[N], vrecebe[N];

    vetor_aleatorio(v1, N, INI, FIM);
    vetor_aleatorio(v2, N, INI, FIM);

    printf("[ ");
    imprimir_vetor(v1, N);
    printf("]");

    puts(" ");

    printf("[ ");
    imprimir_vetor(v2, N);
    printf("]");

    EQM(v1, v2, vrecebe, N);


    return 0;
}

void vetor_aleatorio(float *vetor, int tam, int inicio, int final){
    for(int i=0; i<tam; i++){
        *(vetor + i) = inicio + rand() % final; 
    }
}

void imprimir_vetor(float *vet, int tam){
    for(int i=0; i<tam; i++){
        printf("%.3f - ", *(vet+i));
    }
}

void EQM(float *v1, float *v2, float *vrecebe, int tam){
    float soma = 0;
    for(int i=0; i<tam; i++){
        *(vrecebe + i) = *(v1 + i) - *(v2 + i) * (*(v1 + i) - *(v2 + 2));
    }
    for(int j=0; j<tam; j++){
        soma += *(vrecebe + j); 
    }
    
    printf("\nEQM: %.3f\n", (float)soma/tam);
}
