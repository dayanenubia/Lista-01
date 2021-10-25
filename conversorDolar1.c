//Elaborar um programa em C que apresente o valor da conversão em dólar (US$) de um valor lido em real, o
//programa deve solicitar a cotação do dólar e também a quantidade de reais disponível com o usuário.
#include<stdio.h>
#include<locale.h>
int main() {
    float cotacao, dimdim, convertido;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor a ser convertido e a cotação do dolar: ");
    scanf("%f%f", &cotacao, &dimdim);
    convertido = dimdim * cotacao;
    printf("Valor convertido: R$%.2f\n", convertido);
}
    
