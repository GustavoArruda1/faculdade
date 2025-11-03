#include <stdio.h>


// Criando novo tipo de dados
struct Funcionario {
    int registro;
    float salario;
};

// Vetor com espaço para 5 funcionários
struct Funcionario listaFunc[5];

// Lê os dados dos funcionários
void carregar_vetFunc(int tam) {
    for (int i = 0; i < tam; i++) {
        printf("\nDigite o registro: ");
        scanf("%i", &listaFunc[i].registro);

        printf("\nDigite o salario: ");
        scanf("%f", &listaFunc[i].salario);
    }
}

// Mostra todos os funcionários cadastrados
void exibir_vetFunc(int tam) {
    printf("\n\n--- Lista de Funcionarios ---\n");
    for (int i = 0; i < tam; i++) {
        printf("\n%i  ", listaFunc[i].registro);
        printf("%.2f", listaFunc[i].salario);
    }
}

int main() {
    carregar_vetFunc(5);  // Chama a função para ler 5 funcionários
    exibir_vetFunc(5);    // Mostra os funcionários na tela
    return 0;
}
