#include <stdio.h>

void dobrar(int *numero){
    
    *numero = *numero * 2;
    
}

int main(void){
    
    int numero;
    
    printf("===== PONTEIROS E FUNÇÕES ===== \n");
    printf("\n");
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    dobrar(&numero);
    
    printf("\n");
    printf("Valor dobrado: %d\n", numero);
    
    return 0;
    
}
