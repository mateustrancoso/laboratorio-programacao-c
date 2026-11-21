#include <stdio.h>

int main() {
    int matriz[2][2] = {
        {6, 7},
        {4, 2}
    };

    printf("== Matriz ==\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
