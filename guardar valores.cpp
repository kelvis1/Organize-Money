#include <stdio.h>
#include <stdlib.h>


float saldo = 0.00;
float gastos = 0.00;

void carregarDados() {
    FILE *arquivo;
    arquivo = fopen("dados.txt", "r");
    if (arquivo != NULL) {
        fscanf(arquivo, "%f %f", &saldo, &gastos);
        fclose(arquivo);
    }
}


void salvarDados() {
    FILE *arquivo;
    arquivo = fopen("dados.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "%.2f %.2f", saldo, gastos);
        fclose(arquivo);
    }
}


void exibirMenu() {
    printf("SALDO: R$ %.2f\tGastos: R$ %.2f\n", saldo, gastos);
    printf("\nSELECIONE UMA OPCAO:\n");
    printf("1. Cadastrar saldo\n");
    printf("2. Cadastrar despesa\n");
    printf("3. Sair\n");
    printf("\n -> ");
}

int main() {
    int opcao;
    float valor;

    carregarDados();

    while (1) {
      
        exibirMenu();
        scanf("%d", &opcao);

        system("cls"); 

        switch(opcao) {
            case 1:
                printf("Digite o valor do saldo: ");
                scanf("%f", &valor);
                saldo += valor;
                system("cls");
                break;
            case 2:
                printf("Digite o valor da despesa: ");
                scanf("%f", &valor);
                gastos += valor;
                system("cls");
                break;
            case 3:
                printf("Encerrando o programa...\n");
                salvarDados();
                
                return 0;
            default:
                printf("Opcao invalida. Por favor, escolha novamente.\n");
        }
    }
}
