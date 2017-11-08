#include <stdio.h>
void main(){
	int num = 15, coci, x;
		/*printf("hasta que numero quieres que convierta a binario?");
		scanf("%d", &x);*/
		do{
			coci = num % 2;
			num = num / 2;
			printf("%d", coci);
		} 
		while (num != 0);
		num++;
}