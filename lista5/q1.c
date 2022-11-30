#include <stdio.h>
#include <stdlib.h>

void somar(int a, int b, int c);
void multiplicar(int a, int b, int c);
void op(void (*f)(int, int, int), int a, int b, int c);

int main(int argc, char* argv[]){

    int num1, num2, a;

    void (*f[])() = {somar, multiplicar};

    if(argc != 4){
        puts("Coloque os números e a operação após a execução do programa.");
        exit(1);
    }
    
    char *opcao;

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    opcao = argv[3];

    if(opcao[0] == '+'){
        op(f[0],num1,num2,a);
        exit(2);
    }else if(opcao[0] == 'x'){
        op(f[1],num1,num2,a);
        exit(3);
    }

    return 0;
}

void somar(int a, int b, int c){
    c = a + b;
    printf("%d\n", c);
}

void multiplicar(int a, int b, int c){
    c = a * b;
    printf("%d\n", c);
}

void op(void (*f)(int, int, int), int a, int b, int c){
    (*f)(a,b,c);
}