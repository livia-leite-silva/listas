#include <stdio.h>
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
    }
}


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


void ex16()
{
    float valorhora, inss, salariobruto;
    int horatrabalhada;
    
    printf("Valor de cada hora trabalhada: ");
    scanf("%f", &valorhora);
    printf("Horas trabalhadas no mês: ");
    scanf("%d", &horatrabalhada);
    salariobruto = (valorhora * horatrabalhada);
    inss = (0.1 * salariobruto);
    
    printf("O salario bruto é de %0.1f\n", salariobruto);
    printf("O salario liquido é de %0.1f\n", salariobruto - inss);

}


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
    }
}


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