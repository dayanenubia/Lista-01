#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	do {
		printf("\nDigite dois valores inteiros: ");
		scanf("%d%d", &num1, &num2);
		if(num1 > num2){
			printf("O primeiro numero (%d) � maior que o segundo (%d)", num1, num2);
		} else if (num2 > num1){
			printf("O segundo numero (%d) � maior que o primeiro (%d)", num2, num1);
		} else {
			printf("Os numeros %d e %d s�o iguais!", num1, num2);
		}
	} while(1);
}
