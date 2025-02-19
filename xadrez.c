#include <stdio.h>
//VOIDS Recursivas para movimento de peças

void bispodireita() {
        printf("\nMovendo Bispo 5 casas na diagonal direita para cima:\n");
        for (int i = 1; i <= 5; i++) {  // Controla a quantidade de movimentos
            for (int j = 1; j <= 1; j++) {  // Controla a movimentação simultânea
                printf("Movimento %d: %d casa(s) para cima e %d casa(s) para direita\n", i, i, i); }}}
            

void bispoesquerda() {
    printf("\nMovendo Bispo 5 casas na diagonal esquerda para cima:\n");
    for (int i = 1; i <= 5; i++) {  // Controla a quantidade de movimentos
        for (int j = 1; j <= 1; j++) {  // Controla a movimentação simultânea
            printf("Movimento %d: %d casa(s) para cima e %d casa(s) para esquerda\n", i, i, i); }}}

void torredireita() {
    printf("\nMovendo Torre 5 casas para a direita:\n");
    for (int i = 1; i <= 5; i++) {  // Controla o número de casas percorridas
            printf("Movimento %d: %d casa(s) para a direita\n", i, i); }}

void torreesquerda(){
    printf("\nMovendo Torre 5 casas para a esquerda:\n");
    for (int i = 1; i <= 5; i++) {  // Controla o número de casas percorridas
            printf("Movimento %d: %d casa(s) para a esquerda\n", i, i); }}

void rainhadireita() {
    printf("\nMovendo Rainha 5 casas para a direita:\n");
    for (int i = 1; i <= 5; i++) {  // Controla o número de casas percorridas
            printf("Movimento %d: %d casa(s) para a direita\n", i, i); }}

void rainhaesquerda() {
    printf("\nMovendo Rainha 5 casas para a esquerda:\n");
    for (int i = 1; i <= 5; i++) {  // Controla o número de casas percorridas
            printf("Movimento %d: %d casa(s) para a esquerda\n", i, i); }}

void cavalodireita() {
    printf("\nMovimento em L Direita...\n");
       
    for (int i = 1; i <= 2; i++) {  
        // Movimento do cavalo para cima (2 casas)
        printf("\nCavalo: %d casa(s) para cima", i);  
    
        if (i == 2) {
            // Apenas no segundo movimento, move para a direita
            printf("\n E\n");
            printf("Cavalo: 1 casa(s) para Direita\n"); } } }

void cavaloesquerda(){
    printf("\nMovimento em L Esquerda...\n");
       
    for (int i = 1; i <= 2; i++) {  
        // Movimento do cavalo para cima (2 casas)
        printf("\nCavalo: %d casa(s) para cima", i);  
    
        if (i == 2) {
            // Apenas no segundo movimento, move para a direita
            printf("\n E\n");
            printf("Cavalo: 1 casa(s) para Esquerda\n"); } } }


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
        case 1://direita
            bispodireita(); break;

        case 2://esquerda
            bispoesquerda(); } break;
        //----------

    case 2://TORRE
    printf("\nPara que lado fazer movimentos");
    printf("\n1. Direita");
    printf("\n2. Esquerda\n");
    scanf("%d", &lado);

        switch(lado) {
        case 1://direita
            torredireita(); break;

        case 2://esquerda
            torreesquerda(); break; } break;
        //--------------------------------------

    case 3://RAINHA
    printf("\nPara que lado fazer movimentos");
    printf("\n1. Direita");
    printf("\n2. Esquerda\n");
    scanf("%d", &lado);

        switch(lado) {
        case 1:
            rainhadireita(); break;
        case 2:
            rainhaesquerda(); break;
        } break;//---------------------

    case 4://opcao Cavalo / escolher o lado para movimento
    printf("\nPara que lado fazer movimento em L");
    printf("\n1. Direita");
    printf("\n2. Esquerda\n");
    scanf("%d", &lado);

        if(lado == 1) {
            cavalodireita();
        } else if(lado == 2) {
            cavaloesquerda();
        } break;

        

    case 5://opçao sair
        printf("\nSaindo...."); break;
    } 
    
    
    return 0;

}