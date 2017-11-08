#include <stdio.h>
void main(){
	int num, coci;
	printf("Que numero quieres convertir a binario?");
	scanf("%d", &num);
	printf("NOTA: el numero en binario esta al reves xD\n");
	do{
		coci = num % 2;
		num = num / 2;
		printf("%d", coci);
	} 
	while (num != 0);
}