#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	do{
		printf("Digite a sua idade: ");
		scanf("%d", &idade);
		if(idade <= 16){
			printf("Voc� n�o � um eleitor!\n");
		} else if (idade >= 18 && idade <= 65){
			printf("Voc� � um eleitor obrig�torio!\n");
		} else {
			printf("Voc� � um eleitor facultativo!\n");
		}
	} while (1);
}
