#include <stdio.h>

int main() {
    int num, qtdNumeros = 0, somaPares = 0, somaImpares = 0; // variáveis para armazenar os números e contadores

    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &qtdNumeros); // lê a quantidade de números que o usuário vai informar

    if(qtdNumeros <= 0) { // valida se o valor é válido
        printf("Valor invalido! O programa sera encerrado.\n");
        return 1; // encerra o programa em caso de valor inválido
    }

    for(int i = 1; i <= qtdNumeros; i++) { // laço para ler todos os números
        printf("Digite o numero %i: ", i);
        scanf("%i", &num); // lê o número atual

        if(num % 2 == 0) { // verifica se o número é par
            somaPares++; // incrementa o contador de pares
        } else {
            somaImpares++; // incrementa o contador de ímpares
        }
    }

    // exibe os resultados
    printf("\nQuantidade de numeros pares: %i ", somaPares);
    printf("\nQuantidade de numeros impares: %i ", somaImpares);

    return 0;
}
