#include <stdio.h>

int main(){
    
    // definindo variáveis
    int choice;
    int i = 0;
    int b = 0;

    // fornecendo coodernadas usuário
    printf("Escolha a peça ser movida:\n");
    printf("1. Torre\n2. Bispo\n3. Rainha\n");
    scanf("%d", &choice);


    // define execucao baseada escolha usuario 

    switch (choice)
    {
    case 1:
    // OPCAO 1 UTLIZANDO DO WHILE
    
        printf("Você escolheu torre.\n");
        printf("A peça escolhida moverá cinco casas para direita.\n");
        do {
            printf("Direita\n");
            i++;
        } while (i < 5); 
        
            break;
    case 2:
    // OPCAO 2 UTLIZANDO FOR

        printf("Você escolheu Bispo.\n");
        printf("A peça escolhida moverá cinco casas à diagonal.\n");

            for (int a = 0; a < 5; a++)
            {
            printf("Cima\n");
            printf("Direita\n");
            }
        
            break;
    case 3:
    // OPCAO 3 UTLIZANDO WHILE
    
        printf("Você escolheu Rainha.\n");
        printf("A peça escolhida moverá oito casas à esquerda.\n");

            while (b < 8){
            printf("Esquerda\n");
            b++; }
    
            break;
    
    default:
            printf("Opção digitada inválida.\n");
        break;
    }



}