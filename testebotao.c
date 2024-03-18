#include <stdio.h>
#include <stdlib.h>

int main(){
	float saldo = 0.00;
	float gastos = 0.00;
	int opcao;
	float valor;
	
	while (1) {
		system("cls");
		printf("SALDO: R$ %.2f\tGastos: - R$ %.2f\n", saldo,gastos);
		
		printf("\nSELECIONAR UMA OPCAO:\n");
		printf("1. Cadastrar saldo\n");
		printf("2. Cadastrar despesa\n");
		printf("3. Sair\n");
		printf("\n -> ");
		scanf("%d", &opcao);
		
		
		switch(opcao){
			case 1:
				system("cls");
				printf("Digite o valor do saldo: ");
				scanf("%f", &valor);
				saldo = valor;
				break;
			case 2:
				system("cls");
				printf("Digite o valor da despesa: ");
				scanf("%f", &valor);
				gastos = valor;
				break;
			case 3:
				system("cls");
				printf("Encerrando o programa...\n");
				
				return 0;
			default:
				system("cls");
		    	printf("Opcao invalida. Por favor, escolha novamente.\n");
		    	break;
					
		}
	}
}
