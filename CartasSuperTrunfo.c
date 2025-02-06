#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado[3];
    char codigocarta[4];
    char nomecidade [20];
    int populacao = 0;
    float area = 0;
    float pib = 0;
    int pturisticos = 0;

        printf("Digite a sigla do estado:\n");
        scanf ("%s", &estado);

        printf("Digite o código da carta:\n");
        scanf ("%s", &codigocarta);

        printf("Digite o nome da cidade:\n");
        scanf("%s", &nomecidade);

        printf("Digite a população:\n");
        scanf("%d", &populacao);

        printf("Digite a área em km²:\n");
        scanf("%f", &area);

        printf("Digite o PIB:\n");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos\n");
        scanf("%d", &pturisticos);


        printf("\n");
        printf("Carta cadastrada com sucesso!\n\n");
        printf("Estado: %s \n", estado);
        printf("Código da carta: %s \n", codigocarta);
        printf("Nome da cidade: %s \n", nomecidade);
        printf("População: %d \n", populacao);
        printf("Área: %fKM² \n", area);
        printf("PIB: %f \n", pib);
        printf("Número de Pontos Turísticos: %d \n" ,pturisticos);

    return 0;
}
