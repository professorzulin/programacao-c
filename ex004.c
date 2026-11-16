
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    setlocale(LC_ALL, "");

    char nome1[20], nome2[20], nome3[20];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("\nCadastrando a primeira pessoa:\n");
    printf("---------------------------------\n");

    printf("NOME: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("SEXO (M/F): ");
    scanf(" %c", &sexo1);

    printf("NOTA: ");
    scanf("%f", &nota1);

    getchar(); // Consome o Enter pendente

    printf("\nCadastrando a segunda pessoa:\n");
    printf("---------------------------------\n");

    printf("NOME: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("SEXO (M/F): ");
    scanf(" %c", &sexo2);

    printf("NOTA: ");
    scanf("%f", &nota2);

    getchar(); // Consome o Enter pendente

    printf("\nCadastrando a terceira pessoa:\n");
    printf("---------------------------------\n");

    printf("NOME: ");
    fgets(nome3, sizeof(nome3), stdin);
    nome3[strcspn(nome3, "\n")] = '\0';

    printf("SEXO (M/F): ");
    scanf(" %c", &sexo3);

    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("\n\nLISTAGEM COMPLETA\n");
    printf("--------------------------------------\n");
    printf("NOME\t\t\tSEXO\tNOTA\n");

    printf("%-20s\t%c\t%6.1f\n", nome1, sexo1, nota1);
    printf("%-20s\t%c\t%6.1f\n", nome2, sexo2, nota2);
    printf("%-20s\t%c\t%6.1f\n", nome3, sexo3, nota3);

    printf("--------------------------------------\n");

    return 0;
}