#include<stdio.h>

main(){
  int a,b,c;
  printf("Introduce 2 enteros separados por coma: \n");
  scanf("%d,%d,%d", &a,&b,&c);
  printf("Antes del swap a vale \"%d\", b vale \"%d\" y c vale \"%d\"", a,b,c);
  c=a;
  a=b;
  b=c;
  printf("\nDespues de swap a vale \"%d\" y b vale \"%d\" y c vale \"%d\"", a,b,c);
}
