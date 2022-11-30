#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mediana(int *, int);
void preencher_vetor(int *, int, int, int);
void imprimir_vetor(int *, int);
void media(int *, int);
void mediana(int *, int);
// void moda(int *, int);

int main() {
    int *v;

    if(!(v = malloc(10 * sizeof(int)) )){
        puts("No memory.");
        exit(1);
    }
    preencher_vetor(v, 10, 0, 10);
    imprimir_vetor(v, 10);
    puts(" ");
    media(v, 10);
    mediana(v, 10);
    // moda();

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
    printf("média: %.2f\n", media);
}

void mediana(int *v, int tam){
    float mediana=0;
    int t=0;
    int troca=0;

    while(troca == 0){
        troca = 1;
        for(int j=0; j<tam-1 ; j++){
            if(*(v+j) > *(v+j+1)){
                t = *(v+j);
                *(v+j) = *(v+j+1);
                *(v+j+1) = t;
                troca = 0;
            }
        }
    }
    
}

// void moda(int *v, int tam){
    
// }