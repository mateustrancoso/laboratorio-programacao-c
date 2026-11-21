#include <stdio.h>

int main(void){
    
    int numero;
    
    printf("===== ENDEREÇO DE MEMÓRIA ===== \n");
    printf("\n");
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    printf("\n");
    printf("Valor: %d\n", numero);
    printf("Endereço de memória: %p\n", (void *)&numero);
    
    return 0;
    
}
