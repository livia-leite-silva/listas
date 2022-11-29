#include <stdio.h>

struct estoque{
    char nomePeca[30];
    int numPeca;
    float precoPeca;
    int numPedido;
};

int main() {
    struct estoque um;
    
    printf("\nNome da peça: ");
    fgets(um.nomePeca, 30, stdin);

    fflush(stdin);

    printf("\nNúmero da peça: ");
    scanf("%d", &um.numPeca);

    printf("\nPreço da peça: ");
    scanf("%f", &um.precoPeca);

    printf("\nNúmero do pedido: ");
    scanf("%d", &um.numPedido);

    printf("%s - nºpeça: %d - R$%.1f - nºpedido: %d\n", um.nomePeca, um.numPeca, um.precoPeca, um.numPedido);

    return 0;
}