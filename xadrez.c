#include <stdio.h>


int main(){
    //variaveis das pecas
    int torre = 1;
    int bispo = 1;
    int rainha;
    int cavalo, cavalo2;

    //movimento da torre em while
    printf("Torre, Movimenta para a direita, 5 casas\n");
    while (torre <= 5){
        printf("direita \n", torre);
        torre++;
    }

    //movimento da rainha em for
    printf("Rainha, Movimenta para a esquerda, 8 casas\n");
    for(rainha =1; rainha <=8; rainha++){
        printf("Esquerda\n", rainha);
    }

    //movimento do bispo em do-while
    printf("Bispo, Movimenta Vertical 5 casas\n");
    do{
        printf("Cima, direita \n", bispo);
        bispo++;

    }while(bispo <=5);

    printf("Cavalo, Movimenta em L: 2 para baixo, 1 para esquerda\n");
    for(cavalo =1; cavalo <=1; cavalo++){

        for(cavalo2 =1; cavalo2 <=2; cavalo2++){
            printf("Baixo \n", cavalo2);
        }
        printf("Esquerda\n", cavalo);
    }
    
    return 0;
}