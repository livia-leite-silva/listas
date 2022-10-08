#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ex1()
{
    int dias;
    printf("Digite um número: ");
    scanf("%d", &dias);
    switch(dias)
    {
        case 0: 
        printf("Programa encerrado.\n");
        break;
        case 1:
        printf("Domingo.\n");
        break;
        case 2:
        printf("Segunda.\n");
        break;
        case 3:
        printf("Terça.\n");
        break;
        case 4:
        printf("Quarta.\n");
        break;
        case 5:
        printf("Quinta.\n");
        break;
        case 6:
        printf("Sexta.\n");
        break;
        case 7:
        printf("Sábado.\n");
        break;
        default:
        printf("Número de dia não válido.\n");
        break;

    }
}
void ex2()
{
    int dias;

    do{
    printf("Digite um número: ");
    scanf("%d", &dias);
    switch(dias)
    {
        case 0: 
        printf("Programa encerrado.\n");
        break;
        case 1:
        printf("Domingo.\n");
        continue;
        case 2:
        printf("Segunda.\n");
        continue;
        case 3:
        printf("Terça.\n");
        continue;
        case 4:
        printf("Quarta.\n");
        continue;
        case 5:
        printf("Quinta.\n");
        continue;
        case 6:
        printf("Sexta.\n");
        continue;
        case 7:
        printf("Sábado.\n");
        continue;
        default:
        printf("Número de dia não válido.\n");
        continue;
    }
    } while(dias);
} 
void ex3()
{
    int F, fatorial = 1;
    printf("Digite um número inteiro: ");
    scanf("%d", &F);
    for( ; F > 1; --F){
        fatorial *=  F;
    }
    printf("\nO fatorial de é: %d\n", fatorial);
}
void ex4()
{
   float pedro, jose;
   int i;
   pedro = 110;
   jose = 150;
   i = 0;
   do{
    pedro += 3;
    jose += 2;
    i += 1;
   }while(pedro < jose);
   printf("Em %d anos, Pedro será maior que José", i);
}
void ex5()
{
    float n, maior, menor;
    int c;
    while(n != 0){
        printf("Digite um número:\n");
        scanf("%f", &n);
        c += 1;
        if(c == 1){
            maior = menor = n;
        }else{
            if(n > maior){
                maior = n;
            }
            if(n < menor, n != 0){
                menor = n;
            }
        }
    }
    printf("O maior número digitado foi %0.1f e o menor %0.1f\n", maior, menor);
 }
void ex6() //dando erro quando pede pra encerrar com num negativo
{
    int voto;
    do{

    printf("NÚMERO DO CANDIDATO: ");
    scanf("%d", &voto);
    switch(voto){
        case 0:
        printf("Você votou em branco.\nVoto confirmado!\n");
        break;
        case 5:
        printf("Você votou em PAULO.\nVoto confirmado!\n");
        break;
        case 7:
        printf("Você votou em RENATA.\nVoto confirmado!\n");
        break;
        default:
        printf("Você votou nulo.\nVoto confirmado!\n");
        break;
    }
} while(voto >= 0);
}
void ex7()
{
    float num1, num2;
    printf("Digite um número para ser o dividendo: ");
    scanf("%f", &num1);
    printf("Digite um número para ser o divisor: ");
    scanf("%f", &num2);
    while(num2 <= 0){ //pq ao botar somente igual 0 o programa da erro?
        printf("Número inválido!\n");
        printf("Digite um número para ser o divisor: ");
        scanf("%f", &num2);
    }
    printf("O resultado da divisão é %f\n", (float)num1/num2);
}
void ex8()
{
    float e, p, total;
    int resto;
    printf("Digite o valor total do(s) produto(s) R$: ");
    scanf("%f", &total);
    resto = total % 3;
    if (resto = 0){
        printf("A entrada e as parcelas valem: %0.1f");
    }else{
        e = (1/3) * total;
        p = ((1/3) * total) - resto;
        printf("A entrada é de %0.1f e as duas parcelas valem %0.1f", e, p);
    }
}
void ex9()
{
    int a, c = 1, n = 20, b1, b2 = 0;
    for(a = 0; a < n ; a++){
        b1 = c;
        c = b1 + b2;
        b2 = b1;
    }
    printf("O enésimo termo da sequencia de Fibonacci é: %d", b1);
}
void ex10(){
    int i;
    for(i = 15; i <= 90; i++){
        if(i % 4 == 0){
            printf("%d \n", i);
        }
    }
}
void ex12(){
    int num, multi, i;
    printf("Digite um número para saber sua tabuada: ");
    scanf("%d", &num);
    for(i = 1; i <= 10; i++){
        multi = i * num;
        printf("%d x %d = %d \n", num, i, multi);
    }
}
void ex13(){
    int A, B, num;
    printf("Digite um faixa de números(A e B) para saber os pares entre eles: \n");
    scanf("%d %d", &A, &B);
    if(A < B){
            for(num = A; num <= B; num++){
                if(num % 2 == 0){
                    printf("%d \n", num);
        }
    }
    }
    if(A > B){
        for(num = A; num >= B; num--){
            if(num % 2 == 0){
                printf("%d \n", num);
        }
    }  
    }
}
void ex14(){
    int A, B, num, c = 0;
    printf("Digite um faixa de números(A e B) para saber os pares entre eles: \n");
    scanf("%d %d", &A, &B);
    if(A < B){
         for(num = A; num <= B; num++){
            if(num % 3 == 0){
                c += 1;
        }
    }
    }
    else if(A > B){
        for(num = A; num >= B; num--){
            if(num % 3 == 0){
                c += 1;  
        }
    }  
    }
    printf("%d \n", c);
}
void ex15(){
    int num = 3, i;
    printf("\n\n\tO resultados das potências do valor de base 3 elevado aos valores 0 a 7.\n\n");
    for(i =0; i <= 7; i++){
        printf("\n%d elevado à %d = %d\n", num, i, (int)pow(num, i));
    }
}
void ex16(){

}
void ex17(){
    int c, fah;
    printf("\n\n\tTABELA CELSIUS - FAHRENHEIT\n\n");
    for(c = 10; c <= 100; c+= 10){
        fah = (9 * c)/5 + 32;
        printf("\t%d Celsius equivale a %d Fahrenheit.\n", c, fah);
    }
}
void ex18(){

}







int main()
{
    //ex10();
    //ex11();
    //ex12();
    //ex13();
    //ex14();
}