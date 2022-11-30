#include <stdio.h>

struct aluno{
    float n1;
    float n2;
    float media;
};

int main(){
    struct aluno a;

    printf("\nDigite a primero nota: ");
    scanf("%f", &a.n1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &a.n2);

    a.media = (a.n1 + a.n2) / 2;

    printf("\nMédia: %.1f\n", a.media);

    return 0;
}