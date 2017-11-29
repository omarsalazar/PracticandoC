#include <stdio.h>

#define FIL 3
#define COL 3

main() {

    int arreglo[FIL][COL], num = 1;

    for (int i = 0; i < FIL; i++) {
    	for (int j = 0; j < COL; j++) {
			arreglo[j][i] = num;
			num++;
			}
	}
      

    for (int x = 0; x < FIL; x++) {
        for (int y = 0; y < COL; y++) {
            printf("|%d|", arreglo[x][y]);
        }
        printf("\n");
    }


}