#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher_vetor(int *, int, int, int);
void imprimir_vetor(int *, int);

void media(int *, int);
void moda(int *, int);
void mediana(int *, int);
void ordenacao(int *, int);

#define TAM 10
#define INI 0
#define FIM 100

int main(){

    int *v;

    if(!(v = malloc(TAM * sizeof(int)) )){
        puts("No memory.");
        exit(1);
    }

    preencher_vetor(v, TAM, INI, FIM);
    puts("Vetor Aleatório: ");
    imprimir_vetor(v, TAM);

    puts(" ");

    media(v, TAM);
    ordenacao(v, TAM);
    imprimir_vetor(v, TAM);  
    mediana(v, TAM); 

    free(v);

    return 0;
}

void preencher_vetor(int *vet, int tam, int inicio, int final){
    srand(time(NULL));
    for(int i=0; i<tam; i++){
        *(vet+i) = inicio + rand() % final;
    }
}

void imprimir_vetor(int *vet, int tam){
    for(int i=0; i<tam; i++){
        printf("%d ", *(vet+i));
    }
}

void media(int *v, int tam){
    int soma=0;
    float media;
    for(int i=0; i<tam; i++){
        soma += *(v+i);
    }
    media = (float)soma / tam;
    printf("\nMédia: %.2f\n", media);
}

void ordenacao(int *v, int tam){
    int t=0;
    int troca=0;

    while(troca == 0){
        troca = 1;
        for(int j=0; j<tam-1; j++){
            if(*(v+j) > *(v+j+1)){
                t = *(v+j);
                *(v+j) = *(v+j+1);
                *(v+j+1) = t;
                troca = 0;
            }
        }
    }
}

void mediana(int *v, int tam){
    float mediana=0;

    if(tam % 2 == 0){
        mediana = (*(v + (tam/2)) + *(v + tam/2 + 1)) / 2;
        printf("\n\nMediana: %.1f\n", mediana);
    }else{
        mediana = *(v + (tam/2));
        printf("\n\nMediana: %.1f\n", mediana);
    }
}

void moda(int *v, int tam){
    
}