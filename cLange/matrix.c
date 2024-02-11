#include <stdio.h>
#include <stddef.h>

void printArray(int a[][3]);

int main()
{
    // инициализировать массивы 
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int array1[2][3] = {1, 2, 3, 4, 5};
    int array2[2][3] = {{1, 2}, {4}};

    printArray(array);
    puts("");
    printArray(array1);
    puts("");
    printArray(array2);
}

void printArray(int a[][3]){
    size_t i; // счетчик строк 
    size_t d; // счетчик столбцов

    // выполнить итерации по строкам 
    for(i = 0; i <= 1; i++){
        // вывести значения в столбцах
        for(d = 0; d <= 2; d++){
            printf("%d", a[i][d]);
        }
        puts("");
    }

}