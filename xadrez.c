#include <stdio.h>

int main() {

    int peca, ladoL, i, movcompleto = 1;

    printf("Jogo de xadrez\n");
    printf("\nEscolha qual peça quer movimentar");
    
    printf("\n1. Bispo");
    printf("\n2. Torre");
    printf("\n3. Rainha");
    printf("\n4. Cavalo");
    printf("\n5. SAIR do programa\n\n");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1:
        for (i = 1; i <= 5; i++){
            printf("\nBispo: %d casa(s) na diagonal superior direita\n", i);
        } 
        printf("\nBispo foi movimentado.");
        break;

    case 2:
        for (i = 1; i <= 5; i++){
            printf("Torre: %d casa(s) para direita\n", i);
        } 
        printf("\nTorre foi movimentado.");
        break;

    case 3:
        for (i = 1; i <= 8; i++){
            printf("\nRainha: %d casa(s) para a esquerda\n", i);
        } 
        printf("\nRainha foi movimentado.");
        break;

    case 4://opcao Cavalo / escolher o lado para movimento
    printf("\nPara que lado fazer movimento em L");
    printf("\n1. Direita");
    printf("\n2. Esquerda\n");
    scanf("%d", &ladoL);

        switch(ladoL) {

        case 1://caso foir direita
        printf("\nMovimento em L Direita...\n");
       
            for (i = 1; i <= 2; i++){
                printf("\nCavalo: %d casa(s) para cima", i);
            } 
            printf("\n E\n");
            printf("Cavalo: 1 casa(s) para Direita\n"); break;

            case 2://caso for esquerda
        printf("\nMovimento em L Esquerda...\n");
       
            for (i = 1; i <= 2; i++){
                printf("\nCavalo: %d casa(s) para cima", i);
            } 
            printf("\nE\n");
            printf("Cavalo: 1 casa(s) para Esquerda\n"); break;
        

    case 5://opçao sair
        printf("\nSaindo...."); break;
    
    
    default:
        break;
    }
    
    }
    return 0;

}
