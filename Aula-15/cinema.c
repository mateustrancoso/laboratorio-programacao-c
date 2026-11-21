#include <stdio.h>

int main() {
    int matriz[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };
    
    int disponiveis = 0;
    int ocupados = 0;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if (matriz[i][j] == 1) {
                ocupados++;
            } else {
                disponiveis++;
            }
        }
    }
    
    printf("Total de Assentos: %d\n", ocupados + disponiveis);
    printf("Assentos Ocupados: %d\n", ocupados);
    printf("Assentos Disponíveis: %d\n", disponiveis);

    return 0;
}
