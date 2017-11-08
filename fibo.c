// creo que este codigo está kk, estoy seguro que se puede hacer de una manera más "elegante".
#include <stdio.h>
void main(){
	int a = 0, b = 1, c, num;
	printf("Escribe cuantos numeros quieres de la sucesion fibo\n");
	// fibo pa' los cuates uwu.
	scanf("%d", &num);
		if (num < 2){
			printf("%d ", a);
		}
		else{
			printf("%d %d ", a, b);
			for (int i = 0; i < num - 2; ++i){
				c = a + b;
				a = b;
				b = c;
				printf("%d ",c);
			}
		}
}