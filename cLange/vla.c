#include <stdio.h>
#include <stddef.h>

void print1DArray(int size, int arr[size]);
void print2DArray(int row, int col, int arr[row][col]);

int main()
{
    int arraySize; // размер 1 мерного массива
    int row1, col1, row2, col2; // размеры 2 мерного массива

    printf("%s", "Enter size a one-dimensional array: ");
    scanf("%d", &arraySize);

    printf("%s", "Enter number of rows and coiums in 2-D array: ");
    scanf("%d %d", &row1, &col1);

    printf("%s", "Enter number of rows and colums in another 2-D array: ");
    scanf("%d %d", &row2, &col2);

    int array[arraySize];
    int array2D1[row1][col1];
    int array2D2[row2][col2];

    // проверить действие оператора sizeof с массивом переменной длинны 
    printf("\nsizeof(array) yields array size of %d bytes\n", sizeof(array));

    // присвоить хначения элементам первого 1 мерног массива 
    for(size_t i = 0; i < arraySize; i++){
        array[i] = i * i;
    }
    for(size_t i = 0; i < row1; i++){
        for(size_t d = 0; d < col1; d++){
            array2D1[i][d] = i + d;
        }
    }
    for(size_t i = 0;  i < row2; i++){
        for(size_t d = 0; d < col2; d++){
            array2D2[i][d] = i + d;
        }
    }
    puts("\nOne-dimensional array:");
    print1DArray(arraySize, array); // вывести 1 мерный массив 
    puts("\nFirst two-dimensional array:");
    print2DArray(row1, col1, array2D1);
    puts("\nSecond two-dimencioal array");
    print2DArray(row2, col2, array2D2);
}

void print1DArray(int size, int array[size]){
    for(int i = 0; i < size; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
}
void print2DArray(int row, int col, int arr[row][col]){
    for(int i = 0; i < row; i++){
        for(int d = 0; d < col; d++){
            printf("%5d", arr[i][d]);
        }
        puts("");
    }
}