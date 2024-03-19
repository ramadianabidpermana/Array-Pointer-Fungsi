#include <stdio.h>

void koboImaginaryChess(int i, int j, int chessBoard[][8]){
    int moves[8][2] = {{-2, -1}, {-1, -2},{1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2},{-2, 1}};

    for(int move = 0; move < 8; move++){
        int newrow = i + moves[move][0];
        int newcol = j + moves[move][1];
        if(newrow >= 0 && newrow < 8 && newcol >= 0 && newcol < 8){
            chessBoard[newrow][newcol] = 1;
        }
    }
}
int main () {

    int i, j ;
    scanf("%d %d", &i, &j);

    int chessBoard[8][8] = {0};

    koboImaginaryChess(i,j,chessBoard);

    for (int row = 0; row < 8; row++){
        for(int col = 0; col < 8; col++){
            printf("%d", chessBoard[row][col]);
        }
        printf("\n");
    }

    return 0;
}