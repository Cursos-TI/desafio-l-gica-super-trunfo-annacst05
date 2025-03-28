#include <stdio.h>
#include <ctype.h>

int main() {
    // carta 1:
        char estado1 [3];
        char codigoDaCarta1 [100];
        char nomeDaCidade1 [100];
        unsigned long int populacao1;
        double area1;
        double pib1;
        int numeroDePontosTuristicos1;
        double densidade1;
        double pibPerCapita1;
        double superPoder1;

    // carta 2
        char estado2 [3];
        char codigoDaCarta2 [100];
        char nomeDaCidade2 [100];
        unsigned long int populacao2;
        double area2;
        double pib2;
        int numeroDePontosTuristicos2;
        double densidade2;
        double pibPerCapita2;
        double superPoder2;

       //cadastro das cartas 1 e 2  
        printf("\n !!!Cadastro de carta Super-Trunfo!!!\n");
    //carta1
    printf("CADASTRO 1: \n");
    printf("Digite o Estado: \n");
    scanf("%2s", &estado1);
    printf("Digite o Código da carta: \n");
    scanf("%s", codigoDaCarta1);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomeDaCidade1);
    printf("Digite o número de população: \n");
    scanf("%lu", &populacao1);
    printf("Digite o número de Area em Km/2: \n");
    scanf("%lf", &area1);
    printf("Digite o Número do PIB: \n");
    scanf("%lf", &pib1);
    printf("Digite o Número de Pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);

    //carta 2
    printf("CADASTRO 2: \n");
    printf("Digite o Estado: \n");
    scanf("%2s", &estado2);
    printf("Digite o Código da carta: \n");
    scanf("%s", codigoDaCarta2);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomeDaCidade2);
    printf("Digite o número de população: \n");
    scanf("%lu", &populacao2);
    printf("Digite o número de Area em Km/2: \n");
    scanf("%lf", &area2);
    printf("Digite o Número do PIB: \n");
    scanf("%lf", &pib2);
    printf("Digite o Número de Pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    //calculo propriedades derivadas1
    densidade1 = populacao1 / area1;
        pibPerCapita1 = pib1 / populacao1;
        superPoder1 = populacao1 + area1 + pib1 + pibPerCapita1 + densidade1 + numeroDePontosTuristicos1;
    //calculos propriedades derivadas2
    densidade2 = populacao2 / area2;
        pibPerCapita2 = pib2 / populacao2;
        superPoder1 = populacao2 + area2 + pib2 + pibPerCapita2 + densidade2 + numeroDePontosTuristicos2;
    
    //opções do MENU
    int opcao1, opcao2;

    printf("\n=== SUPER TRUNFO - MENU PRINCIPAL ===\n");
    printf("1. Comparar por população\n");
    printf("2. Comparar por área\n");
    printf("3. Comparar por PIB\n");
    printf("4. Comparar por número de pontos túristicos\n");
    printf("5. Comparar por densidade demografica\n");
    printf("\n Escolha o PRIMEIRO atributo (1-5):\n");
    scanf("%d", &opcao1);

    printf("\n Escolha o SEGUNDO atributo (diferente de: %d)\n", opcao1);
    printf("\n=== MENU DE ATRIBUROS ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade demográfica\n");
    printf("Escolha o SEGUNDO atributo (1-5)\n");
    scanf("%d", &opcao2);

    //validação do menu
    opcao1 == opcao2 ? printf("\nError: Você não pode escolher o mesmo atributo duas vezes.\n") : printf("\n CONTINUANDO... \n");
    
    //variável de valores de atributo
    double valor1_carta1, valor1_carta2; // atributo 1
    double valor2_carta1, valor2_carta2; // atributo 2
    
    //cases dos atributos: 1
  switch (opcao1)
  {
  case 1:
    valor1_carta1 = populacao1;
    valor1_carta2 = populacao2;
    break;
  case 2:
    valor1_carta1 = area1;
    valor1_carta2 = area2;
    break;
  case 3:
    valor1_carta1 = pib1;
    valor1_carta2 = pib2;
    break;
  case 4:
    valor1_carta1 = numeroDePontosTuristicos1;
    valor1_carta2 = numeroDePontosTuristicos2;
    break;
  case 5:
    valor1_carta1 = densidade1;
    valor1_carta2 = densidade2;
    break;

  }
  // case atributos: 2
  switch (opcao2)
  {
  case 1:
    valor2_carta1 = populacao1;
    valor2_carta2 = populacao2;
    break;
  case 2:
    valor2_carta1 = area1;
    valor2_carta2 = area2;
    break;
  case 3:
    valor2_carta1 = pib1;
    valor2_carta2 = pib2;
    break;
  case 4:
    valor2_carta1 = numeroDePontosTuristicos1;
    valor2_carta2 = numeroDePontosTuristicos2;
    break;
  case 5:
  valor2_carta1 = densidade1;
  valor2_carta2 = densidade2;
    break;  
  }

  //comparação dos atributos
  printf("\n=== RESULTADO ===\n");
  printf("Carta 1: %s\n", nomeDaCidade1);
  printf("Carta 2: %s\n", nomeDaCidade2);

  //exibição dos atributos escolhidos e seus respectivos valores
  printf("\n ATRIBUTO 1:\n");
  switch (opcao1)
  {
  case 1:
    printf("População\n");
    break;
  case 2:
    printf("Área \n");
    break;
  case 3:
    printf("PIB\n");
    break;
  case 4:
    printf("Pontos Turísticos\n");
    break;
  case 5:
    printf("Densidade demografica\n");
    break;
  }
  printf("%s: %.2f\n", nomeDaCidade1, valor1_carta1);
  printf("%s: %.2f\n", nomeDaCidade2, valor1_carta2);

  printf("\n ATRIBUTO 2:\n");
  switch (opcao2)
  {
    case 1:
    printf("População\n");
    break;
  case 2:
    printf("Área \n");
    break;
  case 3:
    printf("PIB\n");
    break;
  case 4:
    printf("Pontos Turísticos\n");
    break;
  case 5:
    printf("Densidade demografica\n");
    break;
  }
  printf("%s: %.2f\n", nomeDaCidade1, valor2_carta1);
  printf("%s: %.2f\n", nomeDaCidade2, valor2_carta2);

  // soma dos atributos
  double somaCarta1 = valor1_carta1 + valor2_carta1;
  double somaCarta2 = valor1_carta2 + valor2_carta2;

  printf("\nSOMA DOS ATRIBUTOS\n");
  printf("%s: %.2f\n", nomeDaCidade1, somaCarta1);
  printf("%s: %.2f\n", nomeDaCidade2, somaCarta2);

  //verificar vencedor
  if (somaCarta1 > somaCarta2)
  {
    printf("\nVENCEDOR: %s!\n", nomeDaCidade1);
  } else if (somaCarta2 > somaCarta1) {
    printf("\nVEMCEDOR: %s!\n", nomeDaCidade2);
  } else {
    printf("\nEMPATR!\n");
  }
  
}
