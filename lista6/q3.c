#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct info{
    int *pmat;
    int tam;
    float media;
};

int main(){
    struct info u;

    srand(time(NULL));

    int soma=0;

    u.tam = 10;

    if(!(u.pmat = malloc(u.tam * sizeof(int)) )){
        puts("SEM MEMÓRIA!");
        exit(1);
    }

    for(int j=0; j<u.tam; j++){
        *(u.pmat + j) = 0 + rand() % 100;
    }
    
    for(int h=0; h<u.tam; h++){
      printf("%d ", *(u.pmat + h));
    }
    
    for(int i=0; i<u.tam; i++){
        soma += *(u.pmat + i);
    }
    
    u.media = (float)soma / u.tam;
    printf("\n\n\tmédia: %.1f\n", u.media);

    return 0;
}