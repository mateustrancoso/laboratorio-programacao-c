#include <stdio.h>

int main(void){
    
    int numero = 20;
    int *ponteiro;
    
    ponteiro = &numero;
    
    printf("===== UTILIZANDO PONTEIROS ===== \n");
    printf("\n");
    
    printf("Valor da variável: %d\n", numero);
    printf("Endereço da variável: %p\n", (void *)&numero);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);
    
    return 0;
    
}
