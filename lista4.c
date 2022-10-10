#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Questão 1
void somar (int *px, int *py, int *ps);

void q1(){
    int x, y, s;
    //int *px=&x, *py=&y, *ps=&s;
    printf("Digite os valores para somá-los:\n");
    scanf("%d%d", &x,&y);
    somar(&x,&y,&s); //px,py,ps;
    printf("%d + %d = %d\n", x,y,s);
    printf("O endereço de memória onde a soma é encontrada: %p\n", &s);
}
void somar (int *px, int *py, int *ps){
    *ps = *px + *py;
}

// Questão 4

#define TAM 15
#define MX 100
#define INI 0

void getMenor(int *pd, int qtd, int pmenor ); //getMenor(int *, int, int *); FORMA SIMPLIFICADA;
void getMaior(int *pd, int qtd, int *pmenor); //getMaior(int *, int, int *);
void imprimirVetor(int *pd, int qtd); 
void preencherVetor(int *pd, int qtd, int inicial, int qtdfaixa);

void q4(){
    int v[TAM];
    int *pv = NULL; //tirar o lixo, ponteiro não declarado. //int *pv = v;

    srand(time(NULL));
    // preencharVetor(v, TAM, INI, MX); USANDO FUNCAO EM VEZ DO FOR ABAIXO
    pv = v; //pv = &v[0];
    for(int i=0; i<TAM; i++){
        // *(pv+i) = INI + rand() % MX;    
        *(v+i) = INI + rand() % MX;   
    }
    imprimirVetor(v, TAM);
    pirnt("---\n");
    getMenor(v, TAM, &menor);
    getMaior(v, TAM, &maior);

    printf("Maior: %d\nMenor: %d", maior, menor);
}

//ponteiro dos dados, qtd de elementos, endereço do menor valor.
void getMenor(int *pd, int qtd, int pmenor ){
    pmenor = *pd; //pega o primeiro elemento.
    for(int i=1; i<qtd; i++){
        pmenor = ( *(pd+i) < pmenor )?*(pd+i): pmenor;
    }
} 
void getMaior(int *pd, int qtd, int *pmenor){
    *pmenor = *pd; 
    for(int i=1; i<qtd; i++){
        *pmenor = ( *(pd+i) > *pmenor )? *(pd+i): *pmenor;
    }
}
void imprimirVetor(int *pd, int qtd){
    for (int i=0; i<qtd; i++){
        printf("%d ", *(pd+i));
    }
}
void preencherVetor(int *pd, int qtd, int inicial, int qtdFaixa){
        srand(time(NULL));
    for(int i=0; i<qtd; i++){
        *(v+i) = inicial + rand() % qtdFaixa;   
    }
}




int main(){
    // q1();
    q4();
}