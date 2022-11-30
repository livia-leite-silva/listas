#include <stdio.h>
#include <stdlib.h>

#define NOME 25
#define MIN 15

struct professor{
    char nome[NOME];
    char sexo[MIN];
    int idade;
};

struct diciplina{
    char materia[MIN];
    char turno[MIN];
    struct professor pessoa1;
};


int main() {
    struct diciplina t1;

    printf("\nNome: ");
    fgets(t1.pessoa1.nome, NOME, stdin);

    printf("\nSexo: ");
    fgets(t1.pessoa1.sexo, MIN, stdin);

    printf("\nIdade: ");
    scanf("%d", &t1.pessoa1.idade);
    
    printf("\n%s - %s - %d\n", t1.pessoa1.nome, t1.pessoa1.sexo, t1.pessoa1.idade);

    fflush(stdin);

    printf("\nDiciplina ensinada: ");
    fgets(t1.materia, MIN, stdin);
    printf("\nTurno: ");
    fgets(t1.turno, MIN, stdin);

    printf("\n%s - %s", t1.materia, t1.turno);

    return 0;
}