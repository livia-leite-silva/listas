#include <stdio.h>

struct aluno{
    float n1;
    float n2;
    float media;
};

int main(){

    struct aluno a[3];

    puts("\n\t--------------");
    puts("\tCALCULAR MÉDIA");
    puts("\t--------------");

    for(int i=0; i<3; i++){
        printf("\nDigite a primero nota: ");
        scanf("%f", &a[i].n1);

        printf("\nDigite a segunda nota: ");
        scanf("%f", &a[i].n2);

        a[i].media = (a[i].n1 + a[i].n2) / 2;
        printf("\nSua média é %.1f.\n\n", a[i].media);
    }

    return 0;
}