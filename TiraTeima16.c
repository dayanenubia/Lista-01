#include<stdio.h>
int main(){
	int x, y;
	printf("Entre com as coordenaas da bola: ");
	scanf("%d%d", &x, &y);
	if(x >= 0 && x <= 432 && y >= 0 && y <= 468){
		printf("Dentro\n");
	} else {
		printf("Fora\n");
	}
	return 0;
}
