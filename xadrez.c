#include <stdio.h>


int main(){
    //variaveis das pecas
    int torre = 1;
    int bispo = 1;
    int rainha;

    //movimento da torre em while
    while (torre <= 5)
    {
        printf(" Torre, Movimenta %d para a direita \n", torre);
        torre++;
    }

    //movimento da rainha em for
    for(rainha =1; rainha <=8; rainha++){
        printf("Rainha, Movimento %d para a esquerda\n", rainha);
    }

    //movimento do bispo em do-while
    do{
        printf("Bispo, Movimento %d para cima, direita \n", bispo);
        bispo++;

    }while(bispo <=5);

    
    
    return 0;
}