#include <stdio.h>

int main() {
    // Declarando variáveis
    char estado1,estado2;                                   // Armazena a letra do estado (A-H)
    char codigo1[4],codigo2[4];                             // Código da Carta Àte 3 Caracteres ex.( A01)
    char nome1[50],nome2[50];                               // Nome da cidade ( Permite Espaços)
    float area1,area2,pib1,pib2;                            // Área em km² e PIB em Bilhões de Reais
    unsigned long int populacao1,populacao2;                // População da Cidade (Grandes Números)
    int pontos_turisticos1,pontos_turisticos2;              // Quantidade de pontos turísticos
    float pibpercapta1,pibpercapta2,densidade1,densidade2;  // PIB per capta e densidade populacional
    float superpoder1,superpoder2;                          // Super poder da carta
    int escolha;                                            // Escolha de quais atributos vao ser comparados

    // Entrada de dados da primeira carta
    printf("**Cadastro da 1° Carta**\n");
    printf("Digite a letra do estado (A-H):\n");
    scanf(" %c", &estado1);                 
    
    printf("Digite o Código da Carta( Até 3 Caracteres) : \n");
    scanf(" %3s", codigo1); // "%3s" limita a entrada a 3 caracteres para evitar estouro do buffer
    getchar(); // Limpar buffer para evitar problemas na leitura de strings

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nome1); // Lê a string com espaços

    printf("Digite a população da cidade(Somente números inteiros):\n");
    scanf(" %lu", &populacao1);

    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area1);                      

    printf("Digite PIB(em bilhões de reais):\n");       
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos1); // Lê um número inteiro  
    printf("------------------------------------------------------\n");
    
    // Cálculos da primeira carta
    pibpercapta1 = pib1/ (float)populacao1; // Conversão explícita para float evita erro de divisão inteira
    densidade1 = populacao1/area1;
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibpercapta1 + (densidade1 > 0 ? 1 / densidade1 : 0);

    // Entrada de dados da segunda carta
    printf("**Cadastro da 2° Carta**\n");
    printf("Digite a letra do estado (A-H):\n");
    scanf(" %c", &estado2);                
    
    printf("Digite o Código da Carta( Até 4 Caracteres) : \n");
    scanf(" %3s", codigo2); // Mesmo limite de 3 caracteres para segurança
    getchar(); // Limpa buffer

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da cidade(Somente números inteiros):\n");
    scanf(" %lu", &populacao2);
    
    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area2);                      

    printf("Digite PIB(em bilhões de reais):\n");       
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos2);         
    printf("------------------------------------------------------\n");
    
    // Cálculos da segunda carta
    pibpercapta2 = pib2/ (float)populacao2;  // Conversão explícita para float evita erro de divisão inteira
    densidade2 = populacao2/area2; 
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapta2 + (densidade2 > 0 ? 1 / densidade2 : 0);

    //**Exibição dos Dados da 1° Carta**
    printf("     --CARTA 1--\n");             
    printf("Estado (A-H):           %c\n", estado1);
    printf("Código da carta :       %s\n", codigo1);
    printf("Nome da Cidade:         %s\n", nome1);
    printf("População:              %lu \n", populacao1);
    printf("Área:                   %.2f km²\n", area1);
    printf("PIB:                    %.2f bilhões de reais\n",pib1);
    printf("Pontos turísticos:      %d\n", pontos_turisticos1);
    printf("PIB per capta:          %.2f Reais\n", pibpercapta1);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade1); 
    printf("------------------------------------------------------\n");

    //**Exibição dos Dados da 2° Carta**
    printf("     --CARTA 2--\n");             
    printf("Estado (A-H):           %c\n", estado2);
    printf("Código da carta :       %s\n", codigo2);
    printf("Nome da Cidade:         %s\n", nome2);
    printf("População:              %lu \n", populacao2);
    printf("Área:                   %.2f km²\n", area2);
    printf("PIB:                    %.2f bilhões de reais\n",pib2);
    printf("Pontos turísticos:      %d\n", pontos_turisticos2);
    printf("PIB per capta:          %.2f Reais\n", pibpercapta2);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade2);
    printf("------------------------------------------------------\n");

    printf("Comparação de atributos\n\n");
    printf("Escolha uma opção de atributos para comparar entre si:\n");
    printf("1. População\n");
    printf("2. Àrea\n");
    printf("3. Pontos turísticos\n");
    printf("4. PIB per capta\n");
    printf("5. Densidade populacional\n");
    printf("---------------------------\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    //comparação e exibição do resultado usando o switch e if else.
    switch (escolha)
    {
    case 1:   // Escolhendo o numero 1, o atributo população sera comparado
        printf("Você escolheu o atributo 'População' \n");
        printf("Carta 1- %s : %ld\n",nome1, populacao1);
        printf("Carta 2- %s : %ld\n",nome2, populacao2);

        if (populacao1 > populacao2) { // Aqui é feita a comparação e exibição do resultado
            printf("Resultado: Carta 1 (%s) venceu!\n",nome1);
        } else if (populacao1 < populacao2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
        printf("------------------------------------------------------\n"); //Os traços são para deixar a saida mais organizada e bonita
        break;
    case 2:
        printf("Você escolheu o atributo 'Àrea' \n");
        printf("Carta 1- %s : %.2f \n",nome1, area1);
        printf("Carta 2- %s : %.2f \n",nome2, area2);

        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n",nome1);
        } else if (area1 < area2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
        printf("------------------------------------------------------\n");
        break;
    case 3:
        printf("Você escolheu o atributo 'Pontos turísticos' \n");
        printf("Carta 1- %s : %d\n",nome1, pontos_turisticos1);
        printf("Carta 2- %s : %d\n",nome2, pontos_turisticos2);

       if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n",nome1);
    } else if (pontos_turisticos1 < pontos_turisticos2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }
        printf("------------------------------------------------------\n");
        break;
    case 4:
        printf("Você escolheu o atributo 'PIB per capta' \n");
        printf("Carta 1- %s : %.2f\n",nome1, pibpercapta1);
        printf("Carta 2- %s : %.2f\n",nome2, pibpercapta2);

       if (pibpercapta1 > pibpercapta2) {
        printf("Resultado: Carta 1 (%s) venceu!\n",nome1);
    } else if (pibpercapta1 < pibpercapta2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }
        printf("------------------------------------------------------\n");
        break;
    case 5:
        printf("Você escolheu o atributo 'Densidade populacional' \n");
        printf("Carta 1- %s : %.2f\n",nome1, densidade1);
        printf("Carta 2- %s : %.2f\n",nome2, densidade2);
       if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n",nome1);
    } else if (densidade1 > densidade2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }
        printf("------------------------------------------------------\n");
        break;
   default:
       printf("Opção inválida!!\n\n");
        break;
    }
    

    
return 0;
}


