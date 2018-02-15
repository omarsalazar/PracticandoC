#include <stdio.h>
struct alumno{
	char nombre[20];
	int edad;
	float prom;
	char sexo;
};

void main(){
	struct alumno arreglo[2], *ptrS;
		for(ptrS = arreglo; ptrS <= &arreglo[1]; ptrS = ptrS+1){
			printf("Ingresa un nombre \n");
			gets(ptrS -> nombre);
			fflush(stdin);
			printf("Ingresa la edad \n");
			scanf("%d", &ptrS -> edad);
			fflush(stdin);
			printf("Ingresa un promedio \n");
			scanf("%f", &ptrS -> prom);
			fflush(stdin);
			printf("Ingresa el sexo \n");
			ptrS -> sexo = getchar();
			fflush(stdin);
 		}

 		printf("\nEl tamanio es %d", sizeof(struct alumno));
 		ptrS = arreglo;
 		printf("\nEl arreglo inicia en %lu", ptrS);

 		for(ptrS = arreglo; ptrS <= &arreglo[1]; ptrS = ptrS+1){
 			printf("\n En la celda \"%d\" el nombre es \"%s\" y esta en \"%lu\"",(int)(ptrS - arreglo), ptrS -> nombre, &ptrS -> nombre);
 			printf("\n En la celda \"%d\" la edad es \"%d\" anios y esta en \"%lu\"",(int)(ptrS - arreglo), ptrS -> edad, &ptrS -> edad);
 			printf("\n En la celda \"%d\" la promedio es \"%.2f\" y esta en \"%lu\"",(int)(ptrS - arreglo), ptrS -> prom, &ptrS -> prom);
 			printf("\n En la celda \"%d\" el sexo es \"%c\" y esta en \"%lu\"",(int)(ptrS - arreglo), ptrS -> sexo, &ptrS -> sexo);
 			printf("\n-------------------------------------------");
 		}
}