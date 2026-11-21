#include <stdio.h>

int main(void){
    
    int numero = 15;
    int *ponteiro;
    
    ponteiro = &numero;
    
    printf("===== ALTERAÇÃO DE VALORES ===== \n");
    printf("\n");
    
    printf("Valor antes da alteração: %d\n", numero);
    
    *ponteiro = 50;
    
    printf("Valor depois da alteração: %d\n", numero);
    
    return 0;
    
}
