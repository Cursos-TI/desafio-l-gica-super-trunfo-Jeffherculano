#include <stdio.h>

void compara_valor (double a, double b) {           //Esta função compara os dois valores recebidos e imprime quem venceu (com exceção da densidade populacional).
    if (a > b)
    {
       printf("A carta 1 venceu! %d \n", a>b);
    }
    else {
        printf("A carta 2 venceu! %d \n", a>b);
    }
}

void compara_denspop(double a, double b) {
    if (a < b)
    {
        printf("A carta 1 venceu! %d \n", a<b);
    }
    else {
        printf("A carta 2 venceu! %d \n", a<b);
    }
}

    
int main () {
    printf("Trabalho de Super Trunfo em C, trabalhando a inserção e visualização de dados, bem como operações matemáticas e comparação de valores. \n ");

    //Declaração de variáveis da primeira e segunda carta:
    
    char estado_1, estado_2;
    char codcarta_1[10], codcarta_2[10];
    char nome_cidade1[20], nome_cidade2[20];
    unsigned long int popul1, popul2;
    float areakm1, areakm2;
    float pib1, pib2;
    int ponto_tur1, ponto_tur2;
    double denspop1, denspop2;
    double pibcpt1, pibcpt2;

    // Inserção de dados da primeira carta:

    printf("Por favor, insira os dados da primeira carta. \n");
    
    printf("Digite a primeira letra do estado: ");
    scanf("%c", &estado_1);

    printf("Digite o código da carta: ");
    scanf("%s", &codcarta_1);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1,20,stdin);

    printf("Digite a população desta cidade: ");
    scanf("%i", &popul1);

    printf("Digite a área desta cidade em quilômetros: ");
    scanf("%f", &areakm1);

    printf("Digite o PIB em bilhões desta cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos nesta cidade: ");
    scanf("%d", &ponto_tur1);

// Calculo de densidade, PIB per capita e super poder da primeira carta.

    denspop1 = (double)popul1 / areakm1;
    pibcpt1 = (pib1 * 1e9) / (double)popul1; //Aqui acontece a conversão de bilhões para reais.


// As próximas linhas apenas mostram os dados da primeira carta que foram inseridos, além da densidade populacional e PIB per Capita.

    printf("Exbindo agora os dados da primeira carta. \n");
    printf("Estado: %c \n O código da carta: %s \n O nome da cidade: %s", estado_1, codcarta_1, nome_cidade1);
    printf("A população da cidade é: %i \n A área desta cidade em quilômetros é: %.2fkm² \n", popul1, areakm1);
    printf("O PIB desta cidade é: %.2f Bilhões de reais. \n A quantidade de pontos turísticos nesta cidade é: %i \n", pib1, ponto_tur1);
    printf("A densidade populacional da cidade é: %.2f hab/km². \n O PIB per Capita da cidade é: %.2f reais. \n", denspop1, pibcpt1);


//  Agora será a inserção de dados da segunda carta.

    printf("Agora você irá inserir os dados da segunda carta. \n");
    getchar();
    
    printf("Digite a primeira letra do estado: ");
    scanf("%c", &estado_2);

    printf("Digite o código da carta: ");
    scanf("%s", &codcarta_2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2,20,stdin);

    printf("Digite a população desta cidade: ");
    scanf("%i", &popul2);

    printf("Digite a área desta cidade em quilômetros: ");
    scanf("%f", &areakm2);

    printf("Digite o PIB em bilhões desta cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos nesta cidade: ");
    scanf("%d", &ponto_tur2);

// Aqui acontece o calculo da densidade, PIB per capita e super poder da segunda carta

   denspop2 = (double)popul2 / areakm2;
   pibcpt2 = (pib2 * 1e9) / (double)popul2;


// Agora será a visualização de dados da segunda carta, além da densidade populacional e PIB per Capita.
    
    printf("Exbindo agora os dados da segunda carta. \n");
    printf("Estado: %c \n O código da carta: %s \n O nome da cidade: %s", estado_2, codcarta_2, nome_cidade2);
    printf("A população da cidade é: %i \n A área desta cidade em quilômetros é: %.2fkm² \n", popul2, areakm2);
    printf("O PIB desta cidade é: %.2f Bilhões de reais. \n A quantidade de pontos turísticos nesta cidade é: %i \n", pib2, ponto_tur2);
    printf("A densidade populacional da cidade é: %.2f hab/km². \n O PIB per Capita da cidade é: %.2f reais. \n", denspop2, pibcpt2);   
    


// O bloco a seguir é responsável por printar na tela o resultado das comparações chamando a função compara_valor.

    printf("Exibindo a partir de agora a comparação entre as cartas! \n");
    printf("População: "); compara_valor(popul1,popul2);
    printf("Área: "); compara_valor(areakm1, areakm2);
    printf("PIB: "); compara_valor(pib1, pib2);
    printf("Pontos turisticos: "); compara_valor(ponto_tur1, ponto_tur2);
    printf("Densidade Populacional: "); compara_denspop(denspop1, denspop2);
    printf("PIB per Capita: "); compara_valor(pibcpt1, pibcpt2);



    return 0;
}