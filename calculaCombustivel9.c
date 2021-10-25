// Entrada: kmLitro, tempo, velocidade
#include<stdio.h>
int main(){
	float kmLitro, tempo, velocidade, distancia, litros;
	while(1){
		printf("Entre com o tempo (horas) da viagem e a velocidade media (km/h):");
		scanf("%f%f", &tempo, &velocidade);
		distancia = tempo * velocidade;
		printf("Km por litro do automavel: ");
		scanf("%f", &kmLitro);
		litros = distancia / kmLitro;
		printf("Quantidade de litros utilizados: %.2f\n\n", litros);
	}	
	return 0;
}
