#include <stdio.h>
#define FIL 4
#define COL 7

int main() {
    int arreglo[FIL][COL], num = 1;
    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            if (i % 2 == 0 && j % 2 != 0) {
                arreglo[i][j] = num;
                num ++;
            }
            else{
                arreglo[i][j] = 0;
            }
        }
    }

    for (int x = 0; x < FIL; x++) {
        for (int y = 0; y < COL; y++) {
            printf("%d", arreglo[x][y]);
        }
        printf("\n");
    }
    return 0;
}
