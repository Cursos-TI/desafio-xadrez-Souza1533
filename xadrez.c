#include <stdio.h>

int main() {

    int peca, lado, i, movcompleto = 1;

    printf("Jogo de xadrez\n");
    printf("\nEscolha qual peça quer movimentar");
    
    printf("\n1. Bispo");
    printf("\n2. Torre");
    printf("\n3. Rainha");
    printf("\n4. Cavalo");
    printf("\n5. SAIR do programa\n\n");
    scanf("%d", &peca);

    switch (peca){

    case 1://BISPO
    printf("\nPara que lado fazer movimento diagonal");
    printf("\n1. Direita");
    printf("\n2. Esquerda\n");
    scanf("%d", &lado);

        switch(lado) {
        case 1:   //DIREITA
            for (i = 1; i <= 5; i++){
                printf("\nBispo: %d casa(s) na diagonal superior Direita\n", i);
            } 
            printf("\nBispo foi movimentado."); break;

        case 2:    //ESQUERDA
            for (i = 1; i <= 5; i++){
                printf("\nBispo: %d casa(s) na diagonal superior Esquerda\n", i);
            } 
            printf("\nBispo foi movimentado."); break;
        } break;//----------

    case 2://TORRE
    printf("\nPara que lado fazer movimentos");
    printf("\n1. Direita");
    printf("\n2. Esquerda\n");
    scanf("%d", &lado);

        switch(lado) {
        case 1:
            for (i = 1; i <= 5; i++){
                printf("Torre: %d casa(s) para Direita\n", i);
            } 
            printf("\nTorre foi movimentado."); break;

        case 2:
        for (i = 1; i <= 5; i++){
            printf("Torre: %d casa(s) para Esquerda\n", i);
        } 
        printf("\nTorre foi movimentado."); break;
    } break;//------------

    case 3://RAINHA
    printf("\nPara que lado fazer movimentos");
    printf("\n1. Direita");
    printf("\n2. Esquerda\n");
    scanf("%d", &lado);

        switch(lado) {
        case 1:
            for (i = 1; i <= 8; i++){
                printf("\nRainha: %d casa(s) para a Direita\n", i);
            } 
            printf("\nRainha foi movimentado."); break;
        case 2:
            for (i = 1; i <= 8; i++){
                printf("\nRainha: %d casa(s) para a Esquerda\n", i);
            } 
            printf("\nRainha foi movimentado."); break;
        } break;//---------------------

    case 4://opcao Cavalo / escolher o lado para movimento
    printf("\nPara que lado fazer movimento em L");
    printf("\n1. Direita");
    printf("\n2. Esquerda\n");
    scanf("%d", &lado);

        switch(lado) {

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
