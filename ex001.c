#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf(" Listagem de Alunos \n");
    printf(" Nome \t\tNota \n");
    printf(" --------------------- \n");
    printf(" João Batista\t 8.5 \n");
    printf(" Maria Pereira\t 9.0 \n");
    printf(" Pedro Silva\t 7.5 \n");
    printf(" Ana Souza\t 8.0 \n");
    printf(" --------------------- \n");
}