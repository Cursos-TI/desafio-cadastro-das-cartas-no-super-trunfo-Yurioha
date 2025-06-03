#include <stdio.h>

int main(){

    //carta 1
    
    char code[4]; //C01
    char estado[10];//ceara
    char cidade[10];//Fortaleza
    int pop, turis, opcao; //2428678, 40
    float pib, pibb, area; //73.43 (7.343.000.000), 312353
    
    //carta 2
    char code2[4]; //A02
    char estado2[10];//Amazonsa
    char cidade2[10];//Manaus
    int pop2, turis2; //2063689, 40
    float pib2, pibb2, area2; //103.28 (103.280.000.000), 11401


    // Entrada de dados carta 1
    printf("Carta 1:\nDigite o Estado:\n");
    scanf("%s", estado);

    printf("Digite a Cidade:\n");
    scanf("%9s", cidade);

    printf("Digite o Código:\n");
    scanf("%s", code); 

    printf("Digite a População:\n");
    scanf("%d", &pop);

    printf("Digite a Área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pibb);
    
    
    pib = pibb * 1000000000.0;
    float pibpc = pib / pop;
    float densi = pop / area;


    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turis);

    //Entrada de dados carta 2
    printf("Carta 2:\nDigite o Estado:\n");
    scanf("%s", estado2);

    printf("Digite a Cidade:\n");
    scanf("%9s", cidade2);

    printf("Digite o Código:\n");
    scanf("%s", code2); 

    printf("Digite a População:\n");
    scanf("%d", &pop2);

    printf("Digite a Área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pibb2);

    pib2 = pibb2 * 1000000000.0;
    float pibpc2 = pib2 / pop2;
    float densi2 = pop2 / area2;

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turis2);
    
    

   
    // Exibição do resumo carta 1
    printf("\n\nCarta 1:\n\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Código: %s\n", code);
    printf("População: %d\n", pop);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$%.2f Bilhões\n", pibb);
    printf("Quantidade de Pontos Turísticos: %d\n", turis);
    printf("Densidade populacional: %.2f hab/km²\n", densi);
    printf("PIB per capita: R$%.2f\n", pibpc);

     // Exibição do resumo carta 2
    printf("\n\nCarta 2:\n\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", code2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f Bilhões\n", pibb2);
    printf("Quantidade de Pontos Turísticos: %d\n", turis2);
    printf("Densidade populacional: %.2f hab/km²\n", densi2);
    printf("PIB per capita: R$%.2f\n", pibpc2);


    // Comparação de cartas pelo atributo
    printf("\nComparação de cartas\n");
    printf("1. PIB per capita\n");
    printf("2. Área\n");
    printf("3. População\n");
    printf("Escolha o metodo comparativo: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

        printf("Atributo escolhido. PIB per capita!!\n\n");

        printf("Carta 1 - %s = %.2f\n", cidade, pibpc);
        printf("Carta 2 - %s = %.2f\n", cidade2, pibpc2);


         if (pibpc > pibpc2){
        printf("\nResultado: Carta 1 ganhou!!\n\n\n");


    }else{
        printf("\nResultado: Carta 2 ganhou!!\n\n\n");
    }

        break;
    case 2:
        printf("Atributo escolhido. Área!!\n\n");

        printf("Carta 1 - %s = %.2f\n", cidade, area);
        printf("Carta 2 - %s = %.2f\n", cidade2, area2);


        if (area > area2){
        printf("\nResultado: Carta 1 ganhou!!\n\n\n");


    }else{
        printf("\nResultado: Carta 2 ganhou!!\n\n\n");
    }
        break;
    case 3:
    printf("Atributo escolhido. População!!\n\n");

    printf("Carta 1 - %s = %d\n", cidade, pop);
    printf("Carta 2 - %s = %d\n", cidade2, pop2);


    if (pop > pop2){
        printf("\nResultado: Carta 1 ganhou!!\n\n\n");


    }else{
        printf("\nResultado: Carta 2 ganhou!!\n\n\n");
    }
        break;
    default:
        printf("Opção invalida, reeniciando jogo!\n\n\n");
        break;
    }


    
}