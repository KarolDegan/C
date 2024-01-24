#include<stdio.h>
#include <stdlib.h>
typedef struct{
    int dia;
    int mes;
    int ano;
}DATA;
typedef struct{
    char nome[50];
    char tel[21];
    DATA nasc;
}PESSOA;

int main(){
    PESSOA amigo;
    printf("\nNome melhor amigo: ");
    scanf("%s", &amigo.nome);
    printf("\nTelefone melhor amigo: ");
    scanf("%s", &amigo.tel);
    printf("\nData de nascimento Melhor amigo \nDia: ");
    scanf("%d", &amigo.nasc.dia);
    printf("Mes: ");
    scanf("%d", &amigo.nasc.mes);
    printf("Ano: ");
    scanf("%d", &amigo.nasc.ano);
    
    printf("Nome: %s \nTelefone: %s \nData de nascimento: %d/%d/%d", amigo.nome, amigo.tel, amigo.nasc.dia, amigo.nasc.mes, amigo.nasc.ano);
}