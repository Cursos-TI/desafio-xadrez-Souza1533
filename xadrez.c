#include <stdio.h>

int main() {

    int peca;

    printf("Jogo de xadrez\n");
    printf("\nEscolha qual peça quer movimentar");
    printf("\n1. Bispo");
    printf("\n2. Torre");
    printf("\n3. Rainha");
    printf("\n4. SAIR do programa\n\n");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1:
        for (int movimento = 1; movimento <= 5; movimento++){
            printf("Bispo: %d casa(s) na diagonal superior direita\n", movimento);
        } 
        printf("\nBispo foi movimentado.");
        break;

    case 2:
        for (int movimento = 1; movimento <= 5; movimento++){
            printf("Bispo: %d casa(s) para direita\n", movimento);
        } 
        printf("\nBispo foi movimentado.");
        break;

    case 3:
        for (int movimento = 1; movimento <= 8; movimento++){
            printf("Rainha: %d casa(s) para a esquerda\n", movimento);
        } 
        printf("\nBispo foi movimentado.");
        break;

    case 4:
        printf("\nSaindo...."); break;
    
    
    default:
        break;
    }
    

    return 0;

}