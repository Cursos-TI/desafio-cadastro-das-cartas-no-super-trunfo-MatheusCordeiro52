#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

#include <stdio.h>

int main(){

    //variaveis da carta
    char letraEstado;
    char codigoCidade[3];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;
   
    //Entrada e saida dos dados
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

    //saida com os dados e suas descrições
    printf("CÓDIGO DA CARTA: %c%s\n", letraEstado, codigoCidade);
    printf("NOME DA CIDADE: %s\n", nomeCidade);
    printf("POPULAÇÃO DA CIDADE: %.9d\n", populacao);
    printf("ÁREA DA CIDADE EM KM²: %.2f\n", area);
    printf("PIB DA CIDADE: %.3f \n", pib);
    printf("QUANTIDADE DE PONTOS TURISTICOS NA CIDADE: %d\n", pontoTuristico);

    return 0;    
}