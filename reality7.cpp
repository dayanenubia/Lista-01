#include<stdio.h>
int main(){
	int bolaVerde, bolaAmarela, bolaBranca, pontoFinal;
	printf("Digite a quantidade de bolas verdes, amarelas e brancas: ");
	scanf("%d%d%d", &bolaVerde, &bolaAmarela, &bolaBranca);
	pontoFinal = (bolaVerde * 10) + (bolaAmarela * 5) + (bolaBranca * 3);
	printf("A pontuacao final do participante: %d", pontoFinal); 
}
