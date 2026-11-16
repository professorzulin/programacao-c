#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Qual é o seu nome? ");
    char nome[20];
    gets(nome);
    printf("Quantos anos você tem? ");
    int idade;
    scanf("%i", &idade);
    printf("Qual é  seu peso? ");
    float peso;
    scanf("%f", &peso);
    printf("\n------<<< PROCESSANDO >>>------\n\n");
    printf("Muito prazer, %s. Você tem %i anos e pesa %.2f kg, correto?\nFIM", nome, idade, peso);
}