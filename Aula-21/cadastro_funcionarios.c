#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FUNCIONARIOS 5

typedef struct {
    char nome[100];
    int matricula;
} Funcionario;

int main() {
    Funcionario lista[MAX_FUNCIONARIOS];
    int quantidade = 0;
    char continuar;

    printf("=== Cadastro de Funcionarios (Maximo: %d) ===\n\n", MAX_FUNCIONARIOS);

    while (quantidade < MAX_FUNCIONARIOS) {
        printf("Funcionario %d:\n", quantidade + 1);
        
        printf("Digite o nome: ");
        fgets(lista[quantidade].nome, sizeof(lista[quantidade].nome), stdin);
        lista[quantidade].nome[strcspn(lista[quantidade].nome, "\n")] = '\0';

        printf("Digite a matricula: ");
        scanf("%d", &lista[quantidade].matricula);
        
        while (getchar() != '\n');

        quantidade++;

        if (quantidade < MAX_FUNCIONARIOS) {
            printf("\nDeseja cadastrar outro funcionario? (s/n): ");
            scanf(" %c", &continuar);
            while (getchar() != '\n');
            printf("\n");

            if (continuar == 'n' || continuar == 'N') {
                break;
            }
        }
    }

    FILE *arquivo = fopen("funcionarios.txt", "w");

    if (arquivo == NULL) {
        printf("\nErro ao abrir ou criar o arquivo funcionarios.txt!\n");
        return 1;
    }

    fprintf(arquivo, "=== LISTA DE FUNCIONARIOS ===\n");
    for (int i = 0; i < quantidade; i++) {
        fprintf(arquivo, "Funcionario %d:\n", i + 1);
        fprintf(arquivo, "Nome: %s\n", lista[i].nome);
        fprintf(arquivo, "Matricula: %d\n", lista[i].matricula);
        fprintf(arquivo, "-----------------------------\n");
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso no arquivo 'funcionarios.txt'!\n");

    return 0;
}
