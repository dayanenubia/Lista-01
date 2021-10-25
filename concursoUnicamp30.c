#include<stdio.h>
int main (){
	int qtd, aux, notaCorte, p1, p2, cont=0;
	printf("Quantiade de participantes: ");
	scanf("%d", &qtd);
	printf("Nota de corte: ");
	scanf("%d", &notaCorte);
	for(aux = 1; aux <= qtd; aux++){
		printf("Pontuacoes do participante %d: ", aux);
		scanf("%d%d", &p1, &p2);
		if( (p1 + p2) >= notaCorte){
			cont++;
		}
	}
	printf("Quantidade de classificados: %d", cont);
}
