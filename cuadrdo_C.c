#include <stdio.h>
void main(){
	int num;
	printf("Ingresa la medida del lado que quieres ");
	scanf("%d", &num);
	for (int x = 0; x < num; ++x){
		printf("\n ");
		for (int y = 0; y < num; ++y){
			printf(" * ");
		}
	}
}