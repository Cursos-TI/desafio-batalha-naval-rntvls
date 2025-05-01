#include <stdio.h>

int main(){

char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
int numeros[10] = {1,2,3,4,5,6,7,8,9,10};

printf("TABULEIRO BATALHA NAVAL\n");
int tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j =0; j < 10; j++){
        tabuleiro[i][j]= 0;
    }
}
// navio horizontal

int navioHorizontal [3];
int linhah =2;
int colunah = 3;
    for(int i= 0; i < 3; i++){
        tabuleiro[linhah][colunah +i]=3;
    }
// navio vertical

int navioVertical [3];
int linhav = 5;
int colunav = 7;

    for (int i =0; i <3 ; i++){
        tabuleiro [linhav +i][colunav]= 3;
    }

    //Imprimir os numeros em cima
    printf("  ");
    for (int j = 0; j < 10; j++) {
        printf("%2d", numeros[j]);
    }
    printf("\n");
    // imprimir as letras ao lado
    for (int i = 0; i < 10; i++){
        printf("%2c", letras[i]);
        for (int j = 0; j < 10; j++) {
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;


}