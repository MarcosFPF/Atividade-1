#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int quantidade, regiao;
	float preco_unitario = 5.0, total_compra, total_com_frete;

	printf("Informe a quantidade de itens comprados (ate 100): ");
	scanf("%d", &quantidade);

	printf("Informe a regiao de entrega:\n 1-Norte\n 2-Nordeste\n 3-Centro-Oeste\n 4-Sudeste\n 5-Sul\n");
	scanf("%d", &regiao);

	total_compra = quantidade * preco_unitario;

	switch(regiao){
		case 1:
			total_com_frete = total_compra * 1.1;
			printf("Regiao de entrega: Norte\n");
			break;
		case 2:
			total_com_frete = total_compra * 1.08;
			printf("Regiao de entrega: Nordeste\n");
			break;
		case 3:
			total_com_frete = total_compra * 1.12;
			printf("Regiao de entrega: Centro-Oeste\n");
			break;
		case 4:
			total_com_frete = total_compra * 1.15;
			printf("Regiao de entrega: Sudeste\n");
			break;
		case 5:
			total_com_frete = total_compra * 1.11;
			printf("Regiao de entrega: Sul\n");
			break;
		default:
			printf("Regiao de entrega invalida.\n");
			return 1;

	}

	printf("Total a pagar (sem o frete): R$ %.2f\n", total_compra);
	printf("Total a pagar (com o frete): R$ %.2f\n", total_com_frete);

	return 0;
}
