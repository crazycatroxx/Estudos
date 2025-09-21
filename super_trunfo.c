#include <stdio.h>

int main()
{
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomec1[50], nomec2[50];
    unsigned long int população1, população2;
    float area1, area2, densidade1, densidade2;
    float PIB1, PIB2, PIB_Per_Capita1, PIB_Per_Capita2;
    int ponto_tur1, ponto_tur2;
    float super_poder1, super_poder2;
    int resultado = super_poder1 > super_poder2;
       
      // CARTA 1 COLETA DE DADOS
       printf("Olá!\n");
       printf("Bem vindo ao Super Trunfo\n");
       printf("Preencha os dados solicitados da Carta 1 abaixo. \n\n");
       
       printf("Digite uma letra para representar o primeiro Estado(de A a H): \n");
       scanf(" %c" , &estado1);
       
       printf("Digite o código da Carta(ex: A01, B03): \n");
       scanf(" %3s" , &codigo1);
       
       printf("Digite o nome da Cidade: \n");
       scanf(" %49s" , &nomec1);
       
       printf("Digite o número de habitantes: \n");
       scanf(" %d" , &população1);
       
       printf("Digite a área da cidade: \n");
       scanf(" %f" , &area1);
       
       printf("Digite o PIB da Cidade: \n");
       scanf(" %f" , &PIB1);
       
       printf("Digite a quantidade de pontos turísticos: \n");
       scanf(" %d" , &ponto_tur1);
       
         //Calculo da densidade populacional
         densidade1 = população1 / area1;

         //Calculo do PIB per Capita
         PIB_Per_Capita1 = PIB1 / população1;

         //Calculo do super poder
         super_poder1 = população1 + area1 + PIB1 + ponto_tur1 + PIB_Per_Capita1 + (1.0/densidade1);

       //CARTA 2 COLETA DE DADOS
       printf("Preencha os dados solicitados da Carta 2 abaixo. \n");
       
       printf("Digite uma letra para representar o segundo Estado(de A a H): \n");
       scanf(" %c" , &estado2);
       
       printf("Digite o código da Carta(ex: A01, B03): \n");
       scanf(" %3s" , &codigo2);
       
       printf("Digite o nome da Cidade: \n");
       scanf(" %49s" , &nomec2);
       
       printf("Digite o número de habitantes: \n");
       scanf(" %d" , &população2);
       
       printf("Digite a área da cidade em km²: \n");
       scanf(" %f" , &area2);
       
       printf("Digite o PIB da Cidade: \n");
       scanf(" %f" , &PIB2);
       
       printf("Digite a quantidade de pontos turísticos: \n");
       scanf(" %d" , &ponto_tur2);

         //Calculo da densidade populacional
         densidade2 = população2 / area2;

         //Calculo do PIB per Capita
         PIB_Per_Capita2 = PIB2 / população2;

          //Calculo do super poder
         super_poder2 = população2 + area2 + PIB2 + ponto_tur2 + PIB_Per_Capita2 + (1.0/densidade2);
         

            //DADOS CARTA 1
             printf("-----Carta 1-----\n");
             printf("Estado: %c\n", estado1);
             printf("Código: %s\n", codigo1);
             printf("Cidade: %s\n", nomec1);
             printf("População: %d\n", população1);
             printf("Área: %.2f km² \n", area1);
             printf("PIB: %.2f Bilhões de Reais\n", PIB1);
             printf("Número de pontos turísticos: %d\n", ponto_tur1);
             printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
             printf("PIB per Capita: %.2f Reais\n", PIB_Per_Capita1);
             printf("------------------\n\n");

             //DADOS CARTA 2
             printf("-----Carta 2-----\n");
             printf("Estado: %c\n", estado2);
             printf("Código: %s\n", codigo2);
             printf("Cidade: %s\n", nomec2);
             printf("População: %d\n", população2);
             printf("Área: %.2f km²\n", area2);
             printf("PIB: %.2f Bilhões de Reais\n", PIB2);
             printf("Número de pontos turísticos: %d\n", ponto_tur2);
             printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
             printf("PIB per Capita: %.2f Reais\n", PIB_Per_Capita2);
             printf("------------------\n");

          //COMPARAÇÃO DAS CARTAS
          printf("Comparação entre as cartas: \n");
          printf("%d\n", resultado);

            return 0;
}
