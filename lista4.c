#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>


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



// Questão 2
void troca (int *x, int *y){
    int aux;

    aux = *x;
    *x  = *y;
    *y  = aux;
}
void q2(){
    int a = 43;
    int b = 2;

    troca(&a, &b);
    printf("a = %d\nb = %d\n", a,b);
}



// Questão 3
void q3(){

    int n, menor = 0, *pn = &n, *pmenor = &menor;
    do{
        printf("Digite um número:\n");
        scanf("%d", pn);
        if (*pn == 0) break;
        if (*pn < *pmenor || *pmenor == 0) *pmenor = *pn;

    }while(1);

    printf("Menor número: %d\n", *pmenor);

}




// Questão 4
#define TAM 10
void imprimirVetor(int *, int);
void preencherVetor(int *, int);

void q4(){
    int v[TAM], maior, menor;

    preencherVetor(v, TAM);
    imprimirVetor(v, TAM);
    printf("---\n");

}
void imprimirVetor(int *pd, int qtd){
    for (int k=0; k<qtd; k++){
        printf("[%p] %d\n",pd+k,*(pd+k));
    }
}

void preencherVetor(int *v, int qtd){
    int i;
    for (int i=0; i<qtd; i++){
        printf("Digite um valor pro vetor[%d]: ", i);
        scanf("%d", v+i);
    }
}




// Questão 5
#define S 30
void qtdChar(char *p);
void q5()
{
    char string[S], *ps = string;
    int i;
    printf("Digite uma string: ");
    scanf("%s", ps);
    qtdChar(ps);
    printf("%lu bytes\n", sizeof(ps));

}
void qtdChar(char *p)
{
    int i;
    for (i=0; p[i] != '\0'; i++);
    printf("Quantidade de caractere da string: %d\n", i);
}



// Questão 6
void copiaString(char *copia, char *recebe);
void q6()
{
    char s1[TAM], s2[TAM];
    printf("Digite uma string: ");
    scanf("%s", s1);
    copiaString(s1,s2);
    printf("%s\n", s2);

    getchar();
}
void copiaString(char *copia, char *recebe)
{
    while(*copia != '\0'){
        *recebe = *copia;
        copia++;
        recebe++;
    }
    *recebe = '\0';
}



// Questão 7
void q7()
{
    char s1[TAM], s2[TAM], *ps1=s1, *ps2=s2;
    printf("Digite um string: ");
    scanf("%s", ps1);
    printf("Digite um string: ");
    scanf("%s", ps2);
    printf("%s %s ", ps1, ps2);

}



// Questão 8
void q8(){
    char str, caractere, *ps=&str, *pc=&caractere;

    char * contem;
    printf("Digite uma palavra: ");
    scanf("%s", ps);
    fflush(stdin);
    printf("Digite um caractere: ");
    scanf("%c", pc);
    contem = strchr(ps, caractere);
    if (contem == 0)
    {
        printf("Não contém!\n");
    }else
    {
        printf("Contém!\n");
    }
}



// Questão 9
void pVetor(int *v, int tam);
void iVetor(int *v, int tam);
void BubbleSort(int *v, int tam);

void q9() 
{
    int num[10];

    pVetor(num, 10);
    puts("\nVetor Aleatório:");
    iVetor(num,10);
    puts("\n----");
    puts("Ordenados:");
    BubbleSort(num,10);
    iVetor(num,10);
}

void pVetor(int *v, int tam)
{
    int i;
    srand(time(NULL));
    for(i=0;i<tam;i++){
        *(v+i)=rand() % 300;
    }
}
void BubbleSort(int *v, int tam){
	int m, troca, i, j;
	troca=1;
	for(j=tam-1;(j>=1)&&(troca==1);j--){
		troca=0; 
		for(i=0; i<j; i++){
			if(*(v+i)>*(v+i+1)){
				troca=1; 
				m=*(v+i);
				*(v+i)=*(v+i+1);
				*(v+i+1)=m;
			}
		}
	}
}
void iVetor(int *v, int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("%d ", *(v+i));
    }
}



// Questao 10
#define SIZE 10
#define N 7
#define INI 0

void vetorAleatorio(int*, int, int, int);
void impVetor(int*, int);
void contadorFrequencia(int*, int, int*, int);


void q10(){
    int v[SIZE], f[N];
    vetorAleatorio(v,SIZE,INI,N-1);
    puts("Vetor Aleatório: ");
    impVetor(v,SIZE);
    contadorFrequencia(v,SIZE,f,N);
    puts("Contador de frequência: ");
    impVetor(f,N);

}
void vetorAleatorio(int *v, int n, int inicial, int final){
    srand(time(NULL));
    int i;
    for(i=0;i<n;i++){
        *(v+i) = inicial + rand() % final;
    }
}
void impVetor(int *v, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",*(v+i));
    }
    puts("\n");
}
void contadorFrequencia(int *v, int n1, int *f, int n2){
    int i, j, c = 0;
    for(i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(i == *(v+j)){
                c++;
            }
        }
        *(f+i) = c;
        c = 0;
    }
}


int main(){
    //q1();
    //q2();
    //q10();
}