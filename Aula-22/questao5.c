#include <stdio.h>

int main(void){
    
    int numeros[5];
    int *ponteiro;
    
    ponteiro = numeros;
    
    printf("===== PONTEIROS E VETORES ===== \n");
    printf("\n");
    
    for (int i = 0; i < 5; i++){
        
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
    }
    
    printf("\n");
    printf("===== NÚMEROS ARMAZENADOS ===== \n");
    
    for (int i = 0; i < 5; i++){
        
        printf("%d\n", *(ponteiro + i));
        
    }
    
    return 0;
    
}
