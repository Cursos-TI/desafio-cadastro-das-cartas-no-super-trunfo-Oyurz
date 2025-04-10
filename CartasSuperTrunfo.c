#include <stdio.h>

int main(){
    char letra_do_estado;
    char nome[20], codigo[40];
    int Nmpts, Populacao;
    float PIB,area;

    printf("Adicionando a primeira carta do trunfo\n");

    printf("Digite a letra do estádo da cidade: ");
    scanf(" %c", &letra_do_estado);

    printf("Digite o código da carta: ");
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);
   
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &Populacao); 

    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &Nmpts);
   
    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

  
    printf("\nA seguir os dados da primeira carta são:\n");

    printf("\nA letra do estádo da cidade é: %c \n", letra_do_estado);
    printf("O codigo da carta é: %s \n", codigo);
    printf("O nome da cidade é: %s \n", nome);
    printf("O número de habitantes da cidade é: %d \n", Populacao);
    printf("O número de pontos turisticos da cidade é: %d \n", Nmpts);
    printf("A cidade tem a área de: %.2f km²\n", area);
    printf("O PIB da cidade foi de: R$%.2f\n", PIB);

    printf("\n Entrando para cadastras a segunda carta.\n");
    getchar();

    char letra_do_estado2;
    char nome2[40], codigo2[30];
    int Nmpts2, Populacao2;
    float PIB2,area2;

    printf("Adicione os dados da segunda carta\n");

    printf("\nDigite a letra do estádo da cidade: ");
    scanf(" %c", &letra_do_estado2);

    printf("Digite o código da carta: ");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome2);
   
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &Populacao2); 

    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &Nmpts2);
   
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2); 

    printf("\nA seguir os dados da segunda carta são:\n");

    printf("\nA letra do estádo da cidade é: %c \n", letra_do_estado2);
    printf("O codigo da carta é: %s \n", codigo2);
    printf("O nome da cidade é: %s \n", nome2);
    printf("O número de habitantes da cidade é: %d \n", Populacao2);
    printf("Digite o PIB da cisticos da cidade é: %d \n", Nmpts2);
    printf("A cidade tem a área de: %.2fkm²\n", area2);
    printf("O PIB da cidade foi de: R$%.2f\n", PIB2);

    return 0;
}
   