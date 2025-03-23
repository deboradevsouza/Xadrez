#include <stdio.h>

//Declarando as funções dos movimentos das peças utilizando recursividade:

// Movimento Torre:
void movimentoTorre(int casas){
    if (casas > 0){
        printf("Direita \n");
        movimentoTorre(casas - 1);
    }
}
// Movimento Bispo:
void movimentoBispo(int movBispo){
    int movBispoDir = movBispo;
    int movBispoCima = movBispo;
    for(movBispoCima; movBispoCima > 0; movBispoCima--){
        for(movBispoDir; movBispoDir > 0; movBispoDir--){
            printf("Direita\n");
        }
        printf("Cima\n");
    }
}
// Movimento Rainha:
void movimentoRainha(int casas){
    if (casas > 0){
        printf("Esquerda \n");
        movimentoRainha(casas - 1);
    }
}

int main () {

    printf(" *** Bem-vindo ao jogo de Xadrez *** \n");
    
    // Movimento Torre:
    printf("\nMovimento da Torre: \n");
    movimentoTorre(5);

   // Movimento Bispo:
    printf("\nMovimento do Bispo: \n");
    movimentoBispo(5);

    // Movimento Rainha:
    printf("\nMovimento da Rainha: \n");
    movimentoRainha(8);

    // Declarando a variável Cavalo:
    char cavalo;

    //Loop aninhado utilizando for e while para a movimentação do Cavalo:
    printf("\nMovimento do Cavalo: \n");
    for(cavalo = 1; cavalo <= 1; cavalo++)
    {
        while(cavalo <= 2){
            printf("Cima");
            printf("\n");
            cavalo++;
        }
    printf("Direita");
    printf("\n");
    }


    return 0;
}