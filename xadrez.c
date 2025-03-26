#include <stdio.h>
// definindo funcoes 
void torre(int n)
{
    if (n > 0)
    {
         printf("Direita\n");
         torre(n - 1);
    }
}
void bispo(int k) {
    if (k > 0) {
        printf("Cima\n");
        printf("Direita\n");
        bispo(k - 1);  // Chama a função recursivamente
    }
}
void cavalo(int o) 
{
    while(o--){
            
        for (int o = 0; o < 2; o++){
                printf("Baixo\n");
        
        } 
        printf("Esquerda\n");
    }
}
void rainha(int b) 
{
    while (b < 8){
        printf("Esquerda\n");
        b++; }
    
}

int main(){
    
    // definindo variáveis
    int choice;
    int i = 0;
    int b = 0;

    // define loop para reiniciar o programa caso opcao digitada seja inválida
    do {
        
        // fornecendo coodernadas usuário
        printf("Escolha a peça ser movida:\n");
        printf("1. Torre\n2. Bispo\n3. Rainha\n4. Cavalo\n");
        scanf("%d", &choice);


        // define execucao baseada escolha usuario 

        switch (choice)
        {
        case 1:
        // OPCAO 1 UTLIZANDO DO WHILE
        
            printf("Você escolheu torre.\n");
            printf("A peça escolhida moverá cinco casas para direita.\n");
            // define parametro para funcao recursiva
            int quantidade = 5;
            torre(quantidade);
            
                break;
        case 2:
        // OPCAO 2 UTLIZANDO FOR

            printf("Você escolheu Bispo.\n");
            printf("A peça escolhida moverá cinco casas à diagonal.\n");
            int qtdb = 5;
            bispo(qtdb);

                break;
        case 3:
        // OPCAO 3 UTLIZANDO WHILE
        
            printf("Você escolheu Rainha.\n");
            printf("A peça escolhida moverá oito casas à esquerda.\n");
            int movra = 0;
            rainha(movra);
        
                break;
        case 4:
        // OPCAO 4 UTLIZANDO LOOPS ANINHADOS
        
            printf("Você escolheu Cavalo.\n");
            printf("A peça escolhida moverá 2 casas à baixo e 1 casa à esquerda.\n");

            // defome variavel movimento cavalo
            int movcav = 1;
            cavalo(movcav);

            
                break;
        
        default:
                printf("Opção digitada inválida.\n");
            break;
        }

    } while (choice > 4);


}