#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <math.h>

void ex3()
{
    float a;
    printf("Digite um valor real: ");
    scanf("%f", &a);
    
    printf("%0.1f", a);
}


void ex4()
{
    int valor;
    printf("Digite um número: ");
    scanf("%d", &valor);
    printf("O triplo desse número é %d\n", 3 * valor);
    printf("Seu quadrado é %d\n", valor * valor); 
    printf("A metade é %.2f\n", (float)valor/2);
}


void ex5()
{
    float conta;
    printf("Valor da conta do restaurante: ");
    scanf("%f", &conta);

    printf("O valor total ficou de: %0.2f", conta + conta* 0.1);
}


void ex6()
{
    char sexo;
    float altura;
    printf("Altura[m]: ");
    scanf("%f", &altura);
    fflush(stdin);
    printf("Sexo[F/M]: ");
    scanf("%c", &sexo);

    if(sexo == 'F')
    {
        printf("Seu peso ideal é %0.1f", 62.1 * altura - 44.7);
    }else
    {
        printf("Seu peso ideal é %0.1f", 72.7 * altura - 58);
=======
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
>>>>>>> 27c487385e4eb36831b6bcce755d0e0eed495d24
    }
}


<<<<<<< HEAD
void ex7()
{
    int horas, minutos, segundos;
    printf("Digite a hora, minuto e segundo:");
    scanf("%d %d %d", &horas, &minutos, &segundos );

    printf("O tempo total em seguntos é de %d\n", horas * 3600 + minutos * 60 + segundos );
}


void ex8()
{
    int x;
    printf("valor: ");
    scanf("%d", &x);
    
    printf("Seu quadrado é %d\n", x * x);
}


void ex9()
{
    int x;
    printf("Valor: ");
    scanf("%d", &x);
    
    printf("O antecessor de %d é %d e seu sucessor %d!\n", x, x - 1, x + 1 );
}


void ex10()
{
    float comp, alt, lar, vol;
    printf("Digite o comprimento, altura e a largura da caixa, respectivamente: ");
    scanf("%f %f %f", &comp, &alt, &lar);
    vol = (comp * lar * alt);

    printf("O volume dessa caixa retangular é %0.1f\n", vol);
}


void ex11()
{
    float real, dolar;
    printf("Digite em real para converter R$: ");
    scanf("%f", &real);
    printf("Digite a cotação do dólar: ");
    scanf("%f", &dolar);

    printf("Resultado: %0.1f\n", dolar * real);
}


void ex12()
{
    float num1, num2;
    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    printf("A soma deles é: %0.1f\n", num1 + num2);
    printf("A multiplicação deles é: %0.1f\n", num1 * num2);
    printf("A diferença deles é: %0.1f\n", num1 - num2);
    printf("A divisão deles é: %0.1f\n", num1 / num2);
    printf("O resto deles é: %d\n", (int)num1%(int)num2);
}


void ex13()
{
    int a, b, c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    c = b;
    b = a;
    a = c;
    printf("O valor de a: %d e b: %d!\n", a, b);
}


void ex14()
{
    float c, F;
    printf("Qual a temperatura em Celsius: ");
    scanf("%f", &c);
    F = (9 * c + 160) / 5;
    printf("Esta temperatura em Fahrenheit é %0.1f!\n", F);
}


void ex15()
{
    int dias;
    float hora = 50.25, bonus;
    printf("Quantidade de dias trabalhados: ");
    scanf("%d", &dias);
    if(dias <= 9){
        printf("Você receberá no total R$ %0.1f\n", dias * hora - (0.1 * dias * hora));
    } if (20 > dias){
        printf("Você receberá no total R$ %0.1f\n", dias * hora + (0.1 * dias * hora));
    } else{
        printf("Você receberá no total R$ %0.1f\n", dias * hora + (0.2 * dias * hora));
    }
 
}


=======
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
<<<<<<<< HEAD:lista3.c


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
========
>>>>>>> 27c487385e4eb36831b6bcce755d0e0eed495d24
void ex16()
{
    float valorhora, inss, salariobruto;
    int horatrabalhada;
    
    printf("Valor de cada hora trabalhada: ");
    scanf("%f", &valorhora);
    printf("Horas trabalhadas no mês: ");
<<<<<<< HEAD
    scanf("%d", &horatrabalhada);
=======
    scanf("%f", &horatrabalhada);
>>>>>>> 27c487385e4eb36831b6bcce755d0e0eed495d24
    salariobruto = (valorhora * horatrabalhada);
    inss = (0.1 * salariobruto);
    
    printf("O salario bruto é de %0.1f\n", salariobruto);
    printf("O salario liquido é de %0.1f\n", salariobruto - inss);

}
<<<<<<< HEAD


void ex17()
{
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    printf("%d", abs(n));

}


void ex18()
{
    float pi = 3.14159, r;
    printf("Digite o raio em metros: ");
    scanf("%f", &r);
    printf("O valor da circunferência: %.1fm\n",2*pi*r);
    printf("O valor da área: %.1fm\n", pi*r*r);
    printf("O valor da diâmetro:%.1fm\n",2*r);

}


void ex19()
{
    
}


void ex20()
{
    int num;
    printf("Digite um número para saber se é PAR ou IMPAR:\n");
    scanf("%d", &num);
    (num%2==0)? printf("PAR!") : printf("IMPAR!");
}


void ex21()
{
    int i,j;
    printf("Digite um número: ");
    scanf("%d", &i);
    printf("Digite um número para saber se é módulo de %d: ", i);
    scanf("%d", &j);
    (i%j==0)?printf("SIM!\n") : printf("NÃO\n");

}


void ex22()
{
    int letras;
    printf("\t\t\nInteiros equivalentes a algumas letras e símbolos em C:\n\n");
    switch(letras)
    {
        case 1:
        printf("A: %d\n",'A');
        case 2: 
        printf("B: %d\n",'B');
        case 3: 
        printf("C: %d\n",'C');
        case 4: 
        printf("a: %d\n",'a');
        case 5: 
        printf("b: %d\n",'b');
        case 6: 
        printf("c: %d\n",'c');
        case 7: 
        printf("0: %d\n",'0');
        case 8: 
        printf("1: %d\n",'1');
        case 9: 
        printf("2: %d\n",'2');
        case 10: 
        printf("$: %d\n",'$');
        case 11: 
        printf("*: %d\n",'*');
        case 12: 
        printf("+: %d\n",'+');
        case 13: 
        printf("/: %d\n",'/');
        case 14: 
        printf("espaço em branco: %d\n",' ');
=======
void ex17()
{
    int x, mod; 
    printf("Digite um número: ");
    scanf("%d", &x);
    mod = fabs(x);
    printf("O módulo do número digitado é %d\n", mod);
}
void ex18()
{
    float raio, pi = (3.14159);
    printf("Digite o raio do círculo:\n");
    scanf("%f", &raio);
    printf("A circunferência do círculo é: %0.1f\n", 2 * pi * raio);
    printf("O diâmetro do círculo é: %0.1f\n", 2 * raio);
    printf("A área do círculo é: %0.1f\n", pi * (raio * raio));
>>>>>>>> 27c487385e4eb36831b6bcce755d0e0eed495d24:lista1.c


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
>>>>>>> 27c487385e4eb36831b6bcce755d0e0eed495d24
    }
}


<<<<<<< HEAD
void ex23(){
    int n, c, d, u;
    printf("Digite um número: ");
    scanf("%d", &n);
    u = n%10;
    d = (n/10)%10;
    c = n/100;
    printf("Ordem inversa: %d%d%d\n",u,d,c);
}


void ex25()
{
    int s,h,m,s1;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &s);
    h=s/3600;
    m=(s%3600)/60;
    s1= (s%3600)%60;
    printf("Horas: %d\n", h);
    printf("Minutos: %d\n", m);
    printf("Segundos: %d\n", s1);

}


void ex26()
{
    int x1,x2,y1,y2;
    float pontos;
    puts("\t\n\nDISTÂNCIA ENTRE DOIS PONTOS\n");
    printf("Digite a coordenada de um ponto:\n");
    scanf("%d%d", &x1,&y1);
    printf("Digite a coordenada de outro ponto:\n");
    scanf("%d%d", &x2,&y2);
    pontos=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    
    printf("%.1f\n", sqrt(pontos));
}


void ex27()
{
    float n1,n2,n3, mult, m1, m2;
    printf("Digite o 1º valor: ");
    scanf("%f", &n1);
    printf("Digite o 2º valor: ");
    scanf("%f", &n2);
    printf("Digite o 3º valor: ");
    scanf("%f", &n3);

    m1 = (n1+n2+n3)/3;
    mult = n1*n2*n3;
    m2 = pow(mult,3);

    printf("A média aritmética dos números digitados é %.1f\n", m1);
    printf("A média aritmética dos números digitados é %.1f\n", m2);
}
int main(){
    //ex3();
    //ex4();
    // ex25();
    // ex26();
    //ex27();

}
=======
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
void ex19()
{
        printf("********\t    ***   \t   *   \t         *          \n");
        printf("*      *\t  *     * \t  ***  \t      *    *        \n");
        printf("*      *\t *       *\t ***** \t    *        *      \n");
        printf("*      *\t *       *\t   *   \t  *            *    \n");
        printf("*      *\t *       *\t   *   \t *               *  \n");
        printf("*      *\t *       *\t   *   \t   *           *    \n");
        printf("*      *\t *       *\t   *   \t     *       *      \n");
        printf("*      *\t  *     * \t   *   \t       *   *        \n");
        printf("********\t    ***   \t   *   \t         *          \n");
}
void ex20()
{
    int num;
    printf("Digite um número:\n");
    scanf("%d", &num);
    (num%2)? printf("O número %d é ímpar!") : printf("O número %d é par");
}
void ex21()
{
    int in1, in2;
    printf("Digite um número inteiro:\n");
    scanf("%d", &in1);
    printf("Digite um número inteiro:\n");
    scanf("%d", &in2);
    (in1/in2), (in2/in1)? printf("é múltiplo\n") : printf("Não é múltiplo\n");
}
void ex22()
{
    //A = 65 B = 66 a = 97 b = 98 * = 42 + = 43 $ = 36 space = 32 0 = 48 / = 47 12 = 49 50
} 
void ex23()
{
    int num, c, u, d;
    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &num);
    c = (num / 100);
    u = (d % 10);
    d = (num % 100) / 10;
    printf("O número digitado ao contrario é: %d%d%d\n", u, d, c);
}
void ex24()
{
    int x, n;
    printf("Digite um valor para x:\n");
    scanf("%d", &x);
    printf("Digite um valor para n:\n");
    scanf("%d", &n);
    printf("O produto desse valor por 2 elevado a %d é: %d", n, (2 * x << (n - 1)));


}
void ex25()
{
    int s, m, h, resto;
    printf("Digite um tempo em segundos: ");
    scanf("%d", &s);
    h = s / 3600;
    resto = (s % 3600);
    m = (resto / 60);
    s = (resto % 60);
    printf("Nesse tempo temos %d horas %d minutos %d segundos\n", h, m, s);
}

int main(){
<<<<<<<< HEAD:lista3.c
    //q1();
    //q3();
    //q4comFuncao();
}
========
    //ex3();
    //ex4();
    //ex5();
    //ex6();
    //ex7();
    //ex8();
    //ex9();
    //ex10();
    //ex11();
    //ex12();
    //ex13();
    //ex14();
    //ex15();
    //ex16();
    //ex17();
    //ex18();
    //ex19();
    //ex20();
    //ex21();
    //ex22();
    //ex23();
    //ex24();
    //ex25();
    //ex26();
    //ex27();

}
>>>>>>>> 27c487385e4eb36831b6bcce755d0e0eed495d24:lista1.c
>>>>>>> 27c487385e4eb36831b6bcce755d0e0eed495d24
