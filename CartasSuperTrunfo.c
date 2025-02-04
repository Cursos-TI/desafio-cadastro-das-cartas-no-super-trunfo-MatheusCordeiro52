#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

    //variaveis da carta1
    char letraEstado;
    char codigoCidade[3];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;
    float densidadePopulacional;
    float pibPerCapita;
    long int superPoder;
       //variaveis da carta2
    char letraEstado2;
    char codigoCidade2[3];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;
    float densidadePopulacional2;
    float pibPerCapita2;
    long int superPoder2;
  
    //Entrada de dados carta 1
    printf("-=DADOS DA PRIMEIRA CARTA=-\n");
     printf("Digite uma letra de A a H: \n");
        scanf("%c", &letraEstado);
     printf("Digite o código da cidade de 1 a 4:\n");
        scanf("%s", &codigoCidade);
     printf("Digite o nome da cidade:\n");
        scanf("%s", &nomeCidade);
     printf("Digite a população da cidade:\n");
        scanf("%d", &populacao);
     printf("Digite a área da cidade em KM²:\n");
        scanf("%f", &area);
     printf("Digite o PIB da cidade\n");
        scanf("%f", &pib);
     printf("Digite a quantidade de pontos turisticos da cidade:\n");
        scanf("%d", &pontoTuristico);
printf("\n");
     //Calculo de densidade populacional carta 1
    densidadePopulacional = (populacao / area);
    //Calculo de PIB per capita carta 1
    pibPerCapita = (populacao / pib);
    //Calculo do Super Poder carta 1
    superPoder = (populacao + (int)area + (int)pib + pontoTuristico + (int)densidadePopulacional + (int)pibPerCapita);
        

         //Entrada de dados carta 2
         printf("-=DADOS DA SEGUNDA CARTA=-");
printf("\n");   
        printf("Digite uma letra de A a H: \n");
          scanf(" %c", &letraEstado2);
        printf("Digite o código da cidade de 1 a 4:\n");
          scanf("%s", &codigoCidade2);
        printf("Digite o nome da cidade:\n");
          scanf("%s", &nomeCidade2);
        printf("Digite a população da cidade:\n");
          scanf("%d", &populacao2);
        printf("Digite a área da cidade em KM²:\n");
         scanf("%f", &area2);
        printf("Digite o PIB da cidade\n");
           scanf("%f", &pib2);
        printf("Digite a quantidade de pontos turisticos da cidade:\n");
           scanf("%d", &pontoTuristico2);
    
    //Calculo de densidade populacional carta 2
    densidadePopulacional2 = (populacao2 / area2);
    //Calculo de PIB per capita carta 2
    pibPerCapita2 = (populacao2 / pib2);
    //Calculo do Super Poder carta 2
    superPoder2 = (populacao2 + (int)area2 + (int)pib2 + pontoTuristico2 + (int)densidadePopulacional2 + (int)pibPerCapita2);
printf("\n");
    //saida com os dados e suas descrições carta 1
    printf("-=DADOS PRIMEIRA CARTA=-\n");
    printf("CÓDIGO DA CARTA: %c%s\n", letraEstado, codigoCidade);
    printf("NOME DA CIDADE: %s\n", nomeCidade);
    printf("POPULAÇÃO DA CIDADE: %.9d\n", populacao);
    printf("ÁREA DA CIDADE: %.2f KM²\n", area);
    printf("PIB DA CIDADE: %.2f BILHÕES \n", pib);
    printf("QUANTIDADE DE PONTOS TURISTICOS NA CIDADE: %d\n", pontoTuristico);
    printf("DENSIDADE POPULACIONAL: %.2f pessoas/km² \n", densidadePopulacional);
    printf("PIB per capita: %.2f reais \n", pibPerCapita);
    printf("SUPER PODER DA CARTA: %d\n", superPoder);
printf("\n");    
        //saida com os dados e suas descrições 2
        printf("-=DADOS SEGUNDA CARTA=-\n");
printf("\n");        
    printf("CÓDIGO DA CARTA: %c%s\n", letraEstado2, codigoCidade2);
    printf("NOME DA CIDADE: %s\n", nomeCidade2);
    printf("POPULAÇÃO DA CIDADE: %.9d\n", populacao2);
    printf("ÁREA DA CIDADE: %.2f KM²\n", area2);
    printf("PIB DA CIDADE: %.2f BILHÕES \n", pib2);
    printf("QUANTIDADE DE PONTOS TURISTICOS NA CIDADE: %d\n", pontoTuristico2);
    printf("DENSIDADE POPULACIONAL: %.2f pessoas/km² \n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais \n", pibPerCapita2);
    printf("SUPER PODER DA CARTA: %d\n", superPoder2);
printf("\n");
      //saida de dados com disputa de cartas
      printf("-=DISPUTA DAS CARTAS=-\n");
printf("\n");
      printf("POPULAÇÃO 1 é maior que POPULAÇÃO 2? %d\n", populacao > populacao2);
      printf("ÁREA 1 é maior que ÁREA 2? %d\n", (int)area > (int)area2);
      printf("PIB 1 é maior que PIB 2? %d\n", (int)pib > (int)pib2);
      printf("PONTO TURISTICO 1 É MAIOR QUE PONTO TURISTICO 2? %d\n", pontoTuristico > pontoTuristico2);
      printf("DENSIDADE POPULACIONAL 1 É MENOS QUE DENSIDADE POPULACIONAL 2? %d\n", (int)densidadePopulacional < (int)densidadePopulacional2);
      printf("PIB per capita 1 é maior que PIB per capita 2? %d\n", (int)pibPerCapita > (int)pibPerCapita2);
      printf("SUPER PODER DA CARTA 1 é maior que SUPER PODER DA CARTA 2? %d\n", superPoder > superPoder2);
    return 0;    
}