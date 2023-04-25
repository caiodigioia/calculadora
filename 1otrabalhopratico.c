#include <stdio.h>
#include <math.h>

int main() {
    int opcao, i;
    float numeros[5] = {0}, pesos[5] = {0};

    do {
        printf("Escolha uma opção:\n");
        printf("1 - Gravar os 5 números\n");
        printf("2 - Média aritmética simples\n");
        printf("3 - Média ponderada\n");
        printf("4 - Desvio padrão\n");
        printf("5 - Maior valor\n");
        printf("6 - Menor valor\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite os 5 números:\n");
                for (i = 0; i < 5; i++) {
                    scanf("%f", &numeros[i]);
                    }
                printf("Os números digitados foram: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f; ", numeros[i]);
    }
    printf("\n");
    break;

            case 2:
                if (numeros[0] == 0) {
                    printf("É necessário ler os números antes de realizar este cálculo.\n");
                    break;
                }
                float soma = 0;
                for (i = 0; i < 5; i++) {
                    soma += numeros[i];
                }
                float media_aritmetica = soma / 5;
                printf("A média aritmética é: %.2f\n", media_aritmetica);
                break;
            case 3:
                if (numeros[0] == 0) {
                    printf("É necessário ler os números antes de realizar este cálculo.\n");
                    break;
                }
                printf("Os números digitados foram: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f; ", numeros[i]);
    }
    printf("\n");
                printf("Digite os pesos associados a cada número (na ordem em que aparecem):\n");
                for (i = 0; i < 5; i++) {
                    scanf("%f", &pesos[i]);
                }
                float soma_ponderada = 0, soma_pesos = 0;
                for (i = 0; i < 5; i++) {
                    soma_ponderada += numeros[i] * pesos[i];
                    soma_pesos += pesos[i];
                }
                float media_ponderada = soma_ponderada / soma_pesos;
                printf("A média ponderada é: %.2f\n", media_ponderada);
                break;
            case 4:
                if (numeros[0] == 0) {
                    printf("É necessário ler os números antes de realizar este cálculo.\n");
                    break;
                }
                float media = 0, soma_desvio = 0;
                for (i = 0; i < 5; i++) {
                    media += numeros[i];
                }
                media /= 5;
                for (i = 0; i < 5; i++) {
                    soma_desvio += pow(numeros[i] - media, 2);
                }
                float desvio_padrao = sqrt(soma_desvio / 5);
                printf("O desvio padrão é: %.2f\n", desvio_padrao);
                break;
            case 5:
                if (numeros[0] == 0) {
                    printf("É necessário ler os números antes de realizar este cálculo.\n");
                    break;
                }
                float maior_valor = numeros[0];
                for (i = 1; i < 5; i++) {
                    if (numeros[i] > maior_valor) {
                        maior_valor = numeros[i];
                    }
                }
                printf("O maior valor é: %.2f\n", maior_valor);
                break;
            case 6:
                if (numeros[0] == 0) {
                    printf("É necessário ler os números antes de realizar este cálculo.\n");
                    break;
                }
                float menor_valor = numeros[0];
                for (i = 1; i < 5; i++) {
                    if (numeros[i] < menor_valor) {
                        menor_valor = numeros[i];
                    }
                }
                printf("O menor valor é: %.2f\n", menor_valor);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
