#include <stdio.h>
#include <stdlib.h>
int main(){
	int numAleatorio, num, cont=0;
	srand(time(NULL)); //Inicializando o gerador de numeros
	numAleatorio = rand()%10;
	do{
		printf("Numero da sorte: ");
		scanf("%d", &num);
		cont++;
	}while(num != numAleatorio);
	printf("Voce acertou %d tentativas :)\n", cont);
	return 0;
}
