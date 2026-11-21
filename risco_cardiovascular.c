#include <stdio.h>
#include <stdlib.h>

    int perguntaSimNao(char pergunta[]) {
        int resp;
        printf("%s (1-SIM / 2-NAO): ", perguntaSimNao);
        scanf("%d", resp == 1);
    }
    
    float calcularImc(float peso, float altura) {
        return peso / (altura * altura);
    }
    
    void mostrarFatores(int tabagismo, int diabetes, int historicoDeDoenca, int sedentarismo, int ultraProcessados, int estresse, int sonoInadequado) {
        if (tabagismo) printf("Fator de risco: Tabagismo\n");
        if (diabetes) printf("Fator de risco: Diabetes\n");
        if (historicoDeDoenca) printf("Fator de risco: Histórico de doença cardíaca\n");
        if (sedentarismo) printf("Fator de risco: Sedentarismo\n");
        if (ultraProcessados) printf("Fator de risco: Alimentação rica em ultra processados\n");
        if (estresse) printf("Fator de risco: Estresse crônico elevado\n");
        if (sonoInadequado) printf("Fator de risco: Sono inadequado\n");
        if (!tabagismo && !diabetes &&  !historicoDeDoenca && !sedentarismo && !ultraProcessados && !estresse && !sonoInadequado) printf("Sem fatores de risco\n");
        
    }

int main() {
    
    char nome[50];
    int idade;
    float peso, altura;
    int sexo;
    
    printf("================================="
            "\n   SISTEMA DE ANÁLISE DE RISCO"
            "\n=================================");
    
    printf("\nDigite o seu nome: ", nome);
    scanf("%49s", &nome);
    printf("Digite sua idade: ", idade);
    scanf("%d", &idade);
    printf("Digite sua altura: ", altura);
    scanf("%f", &altura);
    printf("Digite seu peso: ", peso);
    scanf("%f", &peso);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
