#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	do{
		printf("\nDigite um número inteiro entre 1 e 7:\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				printf("Domingo!");
				break;
			case 2:
				printf("Segunda - feira!");
				break;
			case 3:
				printf("Terça - feira");
				break;
			case 4:
				printf("Quarta - feira");
				break;
			case 5:
				printf("Quinta - feira");
				break;
			case 6:
				printf("Sexta - feira!");
				break;
			case 7:
				printf("Sábado!");
				break;
			default:
				printf("Valor inválido!");
		}
	} while(1);
}
