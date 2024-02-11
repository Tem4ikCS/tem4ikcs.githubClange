#include <stdio.h>
#include <stddef.h>
#define COL 6
#define ROW 4

void printFunction(int a[][COL], size_t row, size_t col);
int minimumFunction(int a[], size_t col);

int main()
{
    size_t i;
    int answer[ROW][COL] = 
                            {{8, 9, 3, 5, 2, 1},
                             {3, 8, 2, 1, 9, 10},
                             {4, 7, 3, 9, 1, 5}, 
                             {2, 8, 10, 3, 7, 9}};
    printFunction(answer, ROW, COL);
    for(i = 0; i < ROW; ++i){
        printf("Row [%d] min = %d\n", i, minimumFunction(answer[i], COL));
    }

}

void printFunction(int a[][COL], size_t row, size_t col){
    size_t i;
    size_t j;
    for(i = 0; i < row; ++i){
        for(j = 0; j < col; ++j){
            printf("%d ", a[i][j]);
        }
        puts("");
    }
}

int minimumFunction(int a[], size_t col){
    size_t i;
    int min = 10;
    for(i = 0; i < col; ++i){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}