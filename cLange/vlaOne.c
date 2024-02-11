#include <stdio.h>
#include <stddef.h>

void print2DArray(size_t row, size_t col, int a[row][col]);

int main()
{
    int ROW, COL;
    size_t i;
    size_t j;
    puts("Enter row and col array");
    scanf("%d %d", &ROW, &COL);
    int myArray[ROW][COL];
    for(i = 0; i < ROW; i++){
        for(j = 0; j < COL; j++){
            myArray[i][j] = i + j;
        }
    }
    print2DArray(ROW, COL, myArray);
}

void print2DArray(size_t row, size_t col, int a[row][col]){
    size_t i;
    size_t j;
    for(i = 0; i < row; ++i){
        for(j = 0; j < col; ++j){
            printf("%d ", a[i][j]);
        }
        puts("");
    }
}