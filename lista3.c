#include <stdio.h>
#include <string.h>

#define TAM 15
void q1(){
    float v[TAM], maior=0, menor=0, soma;
    int i;
    for (i=0;i<15;i++){
        printf("digite o %dº valor: ",i+1);
        scanf("%f", &v[i]);
        if (i == 0){
            maior = menor = v[i];
        }else if(v[i] > maior){
            maior = v[i];
        }else if(v[i] < menor){
            menor = v[i];
        }
    }
    soma = maior + menor;
    printf("A soma do maior e menor número digitado é: %0.1f\n", soma);

}
void q2(){
    char str,caractere;
    char * contem;
    printf("Digite uma palavra: ");
    scanf("%s", &str);
    fflush(stdin);
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    contem = strchr(&str, caractere);
    if (contem == NULL){
        printf("Não contém!\n");
    }else{
        printf("Contém!\n");
    }
}
void q3(){
    char string[TAM];
    int i;
    printf("Digite uma string: ");
    fgets(string, TAM, stdin);
    for (i=0; string[i] != '\0'; i++);
    printf("Quantidade de caracteres: %d\n", i-1);
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
    while(string1[i] == string2[i]){
        if(string1[i]=='\0' || string2[i]=='\0'){
            break;
        }else
        i++;
    }
    if(string1[i]=='\0' && string2[i]=='\0'){
        printf("As strings são iguais!\n");
    }
    else{
        printf("As strings não são iguais!\n");
    }
}
void q5cFuncao(){
    char string1[TAM], string2[TAM];
    char *f;
    printf("Digite uma string: ");
    fgets(string1, TAM, stdin);
    printf("Digite outra string: ");
    fgets(string2, TAM, stdin);
    f = strcat(string1, string2);
    printf("%s", f);

}




int main(){
    //q1();
    //q2();
    //q3();
    //q4comFuncao();
    // q4semFuncao();
    //q5cFuncao();
    
}
