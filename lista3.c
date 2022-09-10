#include <stdio.h>
#include <stdlib.h>

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
    //printf("A soma deles é: %0.1f\n", num1 % num2);
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
    scanf("%f", &horatrabalhada);
    salariobruto = (valorhora * horatrabalhada);
    inss = (0.1 * salariobruto);
    
    printf("O salario bruto é de %0.1f\n", salariobruto);
    printf("O salario liquido é de %0.1f\n", salariobruto - inss);

}
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

}


int main(){
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
    ex17();

}
