#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	do{
		printf("Digite a sua idade: ");
		scanf("%d", &idade);
		if(idade <= 16){
			printf("Você não é um eleitor!\n");
		} else if (idade >= 18 && idade <= 65){
			printf("Você é um eleitor obrigátorio!\n");
		} else {
			printf("Você é um eleitor facultativo!\n");
		}
	} while (1);
}
