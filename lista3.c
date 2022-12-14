
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define TAM 15

void q1()
{
    float v[TAM], maior=0, menor=0, soma;
    int i;
    for (i=0;i<15;i++)
    {
        printf("digite o %dº valor: ",i+1);
        scanf("%f", &v[i]);
        if (i == 0){
            maior = menor = v[i];
        }else if(v[i] > maior)
        {
            maior = v[i];
        }else if(v[i] < menor)
        {
            menor = v[i];
        }
    }
    soma = maior + menor;
    printf("A soma do maior e menor número digitado é: %0.1f\n", soma);

}


void q2()
{
    char str,caractere;
    char * contem;
    printf("Digite uma palavra: ");
    scanf("%s", &str);
    fflush(stdin);
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    contem = strchr(&str, caractere);
    if (contem == 0)
    {
        printf("Não contém!\n");
    }else
    {
        printf("Contém!\n");
    }
}


void q3()
{
    char string[TAM];
    int i;
    printf("Digite uma string: ");
    fgets(string, TAM, stdin);
    for (i=0; string[i] != '\0'; i++);
    printf("Quantidade de caracteres: %d\n", i);
}


void q4comFuncao(){
    char string1[TAM], string2[TAM];
    char contem;
    printf("Digite a 1º string:\n");
    fgets(string1, TAM, stdin);
    printf("Digite a 2º string:\n");
    fgets(string2, TAM, stdin);
    contem = strcmp(string1,string2);
    if (contem == NULL){
        printf("As strings são iguais!\n");
    }else{
        printf("As strings não são iguais!\n");
    }
}  


void q4semFuncao(){
    char string1[TAM]; 
    char string2[TAM];
    int i = 0;
    printf("Digite uma string: ");
    fgets(string1, TAM, stdin);
    printf("Digite outra string: ");
    fgets(string2, TAM, stdin);
    while(string1[i] == string2[i])
    {
        if(string1[i]=='\0' || string2[i]=='\0')
        {
            break;
        }else
        i++;
    }
    if(string1[i]=='\0' && string2[i]=='\0')
    {
        printf("As strings são iguais!\n");
    }
    else
    {
        printf("As strings não são iguais!\n");
    }
}


void q5cFuncao(){
    char string1[TAM], string2[TAM];
    printf("Digite uma string: ");
    fgets(string1, TAM, stdin);
    printf("Digite outra string: ");
    fgets(string2, TAM, stdin);
    strcat(string1, string2);
    printf("%s", string1);
}


#define ALL 35
void q5sFuncao()
{
    char s1[TAM], s2[TAM], srecebe[ALL];
    int i=0, j=0;
    printf("Digite uma string: ");
    fgets(s1, TAM, stdin);
    printf("Digite outra string: ");
    fgets(s2, TAM, stdin);
    while(s1[i] != '\0')
    {
        srecebe[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i] != '\0'){
        srecebe[j] = s2[i];
        i++;
        j++;
    }
    srecebe[j] = '\0';
    printf("%s", srecebe);
}


void q6(){
    char string[TAM], auxiliar[TAM];
    int i, j, t; 
    printf("Digite uma string:");
    scanf("%s", string);
    t = strlen(string);
    j = t - 1; //retira o '\0'
    for (i=0; i < t; i++){
        auxiliar[i] = string[j];
        j--;
    }
    auxiliar[i] = '\0';
    printf("%s\n", auxiliar);
}


#define TAM3 3
void q7(){
    int v[TAM3];
    int i, soma=0, mult=1;
    float media1;
    double media2;
    srand(time(NULL));
    for(i=0; i<TAM3; i++){
       v[i] = rand() % 20;
       printf("%d ", v[i]);
    }
    for(i=0; i<TAM3; i++){
       soma += v[i];
       mult *= v[i];
    }
    media1 = (float)soma/TAM3;
    media2 = cbrt(mult);
    printf("\nMédia Aritmética: %.1f\nMédia Geométrica: %.lf\n", media1, media2);

}


// ordenação por seleção
#define TAM2 100
void q8(){
    int v[TAM2];
    int i, j, n, troca=0;
    srand(time(NULL));
    printf("digite um intervalo de números: ");
    scanf("%d", &n);
    for(i=0;i<TAM2;i++){
        v[i] = rand() % n;
    }
    for (i=0; i<TAM2-1; i++){
        for (j=i+1; j<TAM2; j++){
            if (v[i] > v[j]){
                troca = v[i];
                v[i]=v[j];
                v[j]=troca;
            }
        }
    }
    puts("Vetor ordenado:\n");
    for(i=0;i<TAM2;i++)
        printf("%d ", v[i]);
}


//bubble sort
void q8parte2(){
    int v[TAM2];
    int i, j, n, troca=0;
    srand(time(NULL));
    printf("digite um intervalo de números: ");
    scanf("%d", &n);
    for(i=0;i<TAM2;i++){
        v[i] = rand() % n;
    }
    for (i=1; i<TAM2; i++){
        for (j=0; j<TAM2-1; j++){
            if (v[j] > v[j+1]){
                troca = v[j];
                v[j]=v[j+1];
                v[j+1]=troca;
            }
        }
    }
    puts("Vetor ordenado:\n");
    for(i=0;i<TAM2;i++)
        printf("%d ", v[i]);
}


void q9(){
    int vetor[TAM3][TAM3];
    int i, j;
    for (i=0;i<TAM3;i++){
        for (j=0;j<TAM3;j++){
            printf("Número da posição [%d][%d] do vetor bidimensional: ", i+1,j+1);
            scanf("%d", &vetor[i][j]);
        }
    }
    puts("\nDiagonal Principal");
    for (i=0;i<TAM3;i++){
        for (j=0;j<TAM3;j++){
            if (i == j){
                printf("%d ", vetor[i][j]);
            }
        }
    }
}


void q10(){
    int vetor[TAM3][TAM3];
    int i, j, x, c=0;
    srand(time(NULL));
    printf("Digite um valor: ");
    scanf("%d", &x);
    puts("\nVetor aleatório");
    for (i=0;i<TAM3;i++){
        for (j=0;j<TAM3;j++){
            vetor[i][j] = rand() % 10;
            printf("%d ", vetor[i][j]);
        }
    }
    for (i=0;i<TAM3;i++)
        for (j=0;j<TAM3;j++)
            if (x == vetor[i][j])
                c += 1; 
    printf("\nO valor %d foi repetido %d vezes\n", x,c);
}


int main(){
    //q1();
    //q3();
    //q4comFuncao();
}
