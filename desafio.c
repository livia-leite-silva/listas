#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned char arm = 0, mask = 0x1;
    unsigned char operador;
    int posicao, op = 0;
    srand(time(NULL));
    do{ 
        puts("\n--------");
        for (int i = 8; i > 0; i--){
            operador = (arm >> i) & mask;
            printf("%d", i);
        }
        printf("\n");
        for (int i = 7; i >= 0; i--){
            operador = (arm >> i) & mask;
            printf("%d", operador);
        } 
        puts("\n--------\n");
        puts("Menu:");
        puts("1. Ocupar Armário.\n2. Liberar Armário.\n3. Sair.");
        if (arm == 255)
            printf("Armários cheios.\n");
        printf("Digite uma opção acima: ");
        scanf("%d", &op);
        getchar();
        if (op == 1 && arm != 255){
            while (1) {
                posicao = rand() % 8;
                if (!(arm & (mask << posicao))){
                    arm = arm | (mask << posicao);
                    break;
                }
            }
        }
        else if (op == 2 && arm != 0){
            printf("Digite uma posição para desocupar: ");
            scanf("%d", &posicao);
            getchar();
            arm = arm ^ (mask << posicao - 1);
        }
        else if (op == 3){
            printf("Programa encerrado!\n");
        }
    }while(op!=3);
    return 0;
}
