#include <stdio.h>


int main() {

    // DECLARAÇAO DAS VARIAVEIS CARTA 1 E CARTA 2

    //VARIAVEIS CARTA 1
    char letrac1;
    char cidadec1[50]; //RECEBE 49 CARACTERES
    int codigoc1;
    int populacaoc1;
    int turisticoc1;
    float areac1;
    int pibc1;
    int pibc1percapita;
    float densidadec1;
    
    // VARIAVEIS CARTA 2
    char letracard2;
    char cidadec2[50]; // RECEBE 49 CARACTERES
    int codigoc2;
    int populacaoc2;
    int turisticoc2;
    float areac2;
    int pibc2;
    int pibc2percapita;
    float densidadec2;

    //INICIO DO CODIGO

    printf("---------------------------------- \n");
    printf("    BEM VINDO AO SUPER TRUNFO! \n");
    printf("---------------------------------- \n");
    printf("    Insira os dados da carta 1: \n");
    printf("---------------------------------- \n");

        //RECEBENDO OS DADOS - CARTA 1
        printf("Digite uma letra entre 'A'  e 'H' que representará o estado: ");
        scanf("%c", &letrac1);

        printf("Digite o número da carta: ");
        scanf("%d", &codigoc1);

        // Limpa o buffer antes do fgets
        while ((getchar()) != '\n'); // descarta '\n' o 'ENTER'

        printf("Digite o nome da cidade: ");
        fgets(cidadec1, 50, stdin); //fgets usado para leitura de strings com espaços.

        printf("Digite a população da cidade: ");
        scanf("%d", &populacaoc1);

        printf("Digite a Área em KM² da cidade: ");
        scanf("%f", &areac1);

        printf("Digite o PIB da cidade: ");
        scanf("%d", &pibc1);

        printf("Digite número de pontos turísticos da cidade: ");
        scanf("%d", &turisticoc1);

        // CALCULOS PARA SAIDA DE PER CAPITA E DENSIDADE POPULACIONAL - CARTA 1
        pibc1percapita = pibc1 / populacaoc1;
        densidadec1 = populacaoc1 / areac1;
        

    //=========================================================================================

    //RECEBENDO OS DADOS - CARTA 2
    printf("---------------------------------- \n");
    printf("    Insira os dados da carta 2: \n");
    printf("---------------------------------- \n");

         // Limpa o buffer antes do fgets
        while ((getchar()) != '\n'); // descarta '\n' o 'ENTER'

        printf("Digite uma letra entre 'A'  e 'H' que representará o estado: ");
        scanf("%c", &letracard2);

        printf("Digite o número da carta: ");
        scanf("%d", &codigoc2);

        // Limpa o buffer antes do fgets
        while ((getchar()) != '\n'); // descarta '\n' o 'ENTER'

        printf("Digite o nome da cidade: ");
        fgets(cidadec2, 50, stdin); //fgets usado para leitura de strings com espaços

        printf("Digite a população da cidade:");
        scanf("%d", &populacaoc2);

        printf("Digite a Área em KM² da cidade: ");
        scanf("%f", &areac2);

        printf("Digite o PIB da cidade: ");
        scanf("%d", &pibc2);

        printf("Digite número de pontos turísticos da cidade: ");
        scanf("%d", &turisticoc2);

        system("clear");

        // CALCULOS PARA SAIDA DE PER CAPITA E DENSIDADE POPULACIONAL - CARTA 2
        pibc2percapita = pibc2 / populacaoc2; //CALCULO PER CAPITA
        densidadec2 = populacaoc2 / areac2; //CALCULO DENSIDADE

//===================================================================================

    //EXIBIÇÃO DAS CARTAS APÓS A LEITURA DE DADOS
    //CARTA NUMERO 1
    printf("---------------------------------- \n");
    printf("            CARTA N°1: \n");
    printf("---------------------------------- \n");
        printf("ESTADO: %c \n", letrac1);
        printf("CÓDIGO: %c%d \n", letrac1, codigoc1); //EXIBE A LETRA QUE CORRESPONDE AO ESTADO E O NUMERO DA CARTA, AMBOS OS DADOS FORMAM O CÓDIGO DA CARTA.
        printf("NOME DA CIDADE: %s", cidadec1);
        printf("POPULAÇÃO: %d \n", populacaoc1);
        printf("ÁREA: %.2f KM² \n", areac1);
        printf("PIB: %.2f bilhões de reais \n", pibc1);
        printf("NÚMERO DE PONTOS TURISTICOS: %d \n", turisticoc1);
        printf("DENSIDADE POPULACIONAL: %.2f hab/km² \n", densidadec1);
        printf("PIB per capita: %d Reais \n", pibc1percapita);
    //-----------------------------------------------------------------
    //CARTA NUMERO 2
    printf("---------------------------------- \n");
    printf("            CARTA N°2: \n");
    printf("---------------------------------- \n");
        printf("ESTADO: %c \n", letracard2);
        printf("CÓDIGO: %c%d \n", letracard2, codigoc2); //EXIBE A LETRA QUE CORRESPONDE AO ESTADO E O NUMERO DA CARTA, AMBOS FORMAM O CÓDIGO DA CARTA.
        printf("NOME DA CIDADE: %s", cidadec2);
        printf("POPULAÇÃO: %d \n", populacaoc2);
        printf("ÁREA: %.2f KM² \n", areac2);
        printf("PIB: %.2f bilhões de reais \n", pibc2);
        printf("NÚMERO DE PONTOS TURISTICOS: %d \n", turisticoc2);
        printf("DENSIDADE POPULACIONAL: %.2f hab/km² \n", densidadec2);
        printf("PIB per capita: %d Reais \n", pibc2percapita);


    return 0;
}