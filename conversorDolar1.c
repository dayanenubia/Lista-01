//Elaborar um programa em C que apresente o valor da convers�o em d�lar (US$) de um valor lido em real, o
//programa deve solicitar a cota��o do d�lar e tamb�m a quantidade de reais dispon�vel com o usu�rio.
#include<stdio.h>
#include<locale.h>
int main() {
    float cotacao, dimdim, convertido;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor a ser convertido e a cota��o do dolar: ");
    scanf("%f%f", &cotacao, &dimdim);
    convertido = dimdim * cotacao;
    printf("Valor convertido: R$%.2f\n", convertido);
}
    
