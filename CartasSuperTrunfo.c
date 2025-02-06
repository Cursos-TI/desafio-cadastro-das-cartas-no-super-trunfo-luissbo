#include <stdio.h>

/*Declaracao das variaveis*/

    char estado[3];
    char codigocarta[4];
    char nomecidade[20];
    int populacao = 0;
    float area = 0;
    float pib = 0;
    int pturisticos = 0;
    float denspopulacional = 0;
    float ppc = 0;
    float superpoder = 0;


    char estado2[3];
    char codigocarta2[4];
    char nomecidade2[20];
    int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pturisticos2 = 0;
    float denspopulacional2 = 0;
    float ppc2 = 0;
    float superpoder2 = 0;

    int carta, carta2 = 0;

    




    void entradadados(int x){ //Funcao para digitar e gravar os dados nas variaveis.

        printf("\n\n");

        printf("Digite a sigla do estado da carta %d:\n", x);
        if(x == 1){
            scanf ("%s", &estado);
        }
        else if(x == 2){
            scanf ("%s", &estado2);
        }
        

        printf("Digite o código da carta %d:\n", x);
        if(x == 1){
            scanf ("%s", &codigocarta);
        }
        else if(x == 2){
            scanf ("%s", &codigocarta2);
        }

        printf("Digite o nome da cidade da carta %d:\n", x);
        if(x == 1){
            scanf ("%s", &nomecidade);
        }
        else if(x == 2){
            scanf ("%s", &nomecidade2);
        }

        printf("Digite a população da carta %d:\n", x);
        if(x == 1){
            scanf ("%d", &populacao);
        }
        else if(x == 2){
            scanf ("%d", &populacao2);
        }

        printf("Digite a área em km² da carta %d:\n", x);
        if(x == 1){
            scanf ("%f", &area);
        }
        else if(x == 2){
            scanf ("%f", &area);
        }

        printf("Digite o PIB da carta %d:\n", x);
        if(x == 1){
            scanf ("%f", &pib);
        }
        else if(x == 2){
            scanf ("%f", &pib2);
        }

        printf("Digite o número de pontos turísticos da carta %d:\n", x);
        if(x == 1){
            scanf ("%d", &pturisticos);
        }
        else if(x == 2){
            scanf ("%d", &pturisticos2);
        }       

}





void exibircarta(int x){ //Funcao para exibir os dados gravados nas variaveis.


        printf("\n");
        printf("Carta %d cadastrada com sucesso!\n\n", x);

        if(x == 1){
            printf("Estado: %s \n", estado);
            printf("Código da carta: %s \n", codigocarta);
            printf("Nome da cidade: %s \n", nomecidade);
            printf("População: %d \n", populacao);
            printf("Área: %fkm² \n", area);
            printf("Densidade populacional: %f pessoas/km² \n", denspopulacional);
            printf("PIB: %f bilhões de reais \n", pib);
            printf("PIB per capita: %f reais \n" ,ppc);
            printf("Número de Pontos Turísticos: %d \n" ,pturisticos);
            printf("Super Poder: %f \n", superpoder);

        }else if( x == 2){
            printf("Estado: %s \n", estado2);
            printf("Código da carta: %s \n", codigocarta2);
            printf("Nome da cidade: %s \n", nomecidade2);
            printf("População: %d \n", populacao2);
            printf("Área: %fkm² \n", area2);
            printf("Densidade populacional: %f pessoas/km² \n", denspopulacional2);
            printf("PIB: %f bilhões de reais \n", pib2);
            printf("PIB per capita: %f reais \n" ,ppc2);
            printf("Número de Pontos Turísticos: %d \n" ,pturisticos2);
            printf("Super Poder: %f \n", superpoder2);
        }
        
        

}

int main() { //Funcao principal

    entradadados(1);
    denspopulacional = (float)populacao/area; //Calcula Densidade Populacional 1
    ppc = pib/(float)populacao; //Calcula PIB per Capita 1
    superpoder = (float)populacao + area + pib + ppc + (float)pturisticos + (1/denspopulacional); //Calcula superpoder 1
    exibircarta(1);

    entradadados(2);
    denspopulacional2 = (float)populacao2/area2; //Calcula Densidade Populacional 2
    ppc2 = pib2/(float)populacao2; //Calcula PIB per capita 2
    superpoder2 = (float)populacao2 + area2 + pib2 + ppc2 + (float)pturisticos2 + (1/denspopulacional2); //Calcula superpoder 2
    exibircarta(2);

    printf("\n\nResultado: \n\n");

/*Verifica quais cartas ganharam nas propriedades*/

    printf("População: ");
    if(populacao > populacao2){
        printf("1.\n");
        carta++;
    }
    else{
        printf("0.\n");
        carta2++;
    }

    printf("Área:");
    if(area > area2){
        printf("1.\n");
        carta++;
    }
    else{
        printf("0.\n");
        carta2++;
    }

    printf("Densidade populacional:");
    if(denspopulacional < denspopulacional2){
        printf("1.\n");
        carta++;
    }
    else{
        printf("0.\n");
        carta2++;
    }

    printf("PIB:");
    if(pib > pib2){
        printf("1.\n");
        carta++;
    }
    else{
        printf("0.\n");
        carta2++;
    }

    printf("PIB per capita:");
    if(ppc > ppc2){
        printf("1.\n");
        carta++;
    }
    else{
        printf("0.\n");
        carta2++;
    }

    printf("Número de Pontos Turísticos:");
    if(pturisticos > pturisticos2){
        printf("1.\n");
        carta++;
    }
    else{
        printf("0.\n");
        carta2++;
    }

    printf("Super Poder:");
    if(superpoder > superpoder2){
        printf("1.\n");
        carta++;
    }
    else{
        printf("0.\n");
        carta2++;
    }

    /*Verifica qual carta ganhou*/

    if(carta > carta2){
        printf("Carta 1 Venceu!");
    }

    if(carta < carta2){
        printf("Carta 2 Venceu!");
    }

    if(carta == carta2){
        printf("Empate!");
    }

    return 0;

}