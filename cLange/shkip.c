#include <stdio.h>
#include <stddef.h>
#define COL 6
#define ROW 4

void print2DArray(int array[][COL], size_t col, size_t row);
float averageFunction(int array[], size_t col);
void bubbleSort(int array[], size_t col);
int medianFunction(int array[], size_t col);

int main()
{
    size_t i;
    int myArray[ROW][COL] = {{7, 5, 3, 9, 10, 3},
                             {9, 1, 10, 3, 5, 6},
                             {7, 4, 9, 10, 5, 3},
                             {4, 2, 8, 1, 10, 5}};
    print2DArray(myArray, COL, ROW);
    for(i = 0; i < ROW; ++i){
        printf("%.2f\n", averageFunction(myArray[i], COL));
    }   
    for(i = 0; i < ROW; ++i){
        bubbleSort(myArray[i], COL);
    }
    print2DArray(myArray, COL, ROW);
    for(i = 0; i < ROW; ++i){
        medianFunction(myArray[i], COL - 1);
    }
}

void print2DArray(int array[][COL], size_t col, size_t row){
    size_t i;
    size_t j;
    for(i = 0; i < row; ++i){
        for(j = 0; j < col; ++j){
            printf("%d ", array[i][j]);
        }
        puts("");
    }
}

float averageFunction(int array[], size_t col){
    size_t i;
    int total = 0;
    float average;
    for(i = 0; i < col; ++i){
        total += array[i];
    }
    average = (float) total / col;
    return average;
}

void bubbleSort(int array[], size_t col){
    int hold;
    size_t i;
    size_t j;
    for(i = 1; i < col - 1; ++i){
        for(j = 0; j < col - 1; ++j){
            if(array[j] > array[j + 1]){
                hold = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hold;
            }
        }
    }
}   

int medianFunction(int array[], size_t col){
    printf("%d\n", array[col / 2]);
}