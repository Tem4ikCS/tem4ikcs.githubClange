#include <stdio.h>
#include <stddef.h>
#define SIZE 20
#define COL 5
#define ROW 3

void bubbleFunction(int a[], size_t size);
int binarySearch(int a[], size_t low, size_t high, size_t searchKey);
void printArray(int b[][COL], size_t row, size_t col);
float averageFunction(int b[], size_t col);

int main()
{
    size_t i;
    int result;
    int key;
    int quic[ROW][COL] = 
    {{4, 6, 2, 7, 3},
     {2, 7, 1, 6, 9},
     {4, 7, 3, 9, 10}};
    printArray(quic, ROW, COL);
    for(i = 0; i < ROW; ++i){
        printf("Student [%d] average is: %.2f\n", i, averageFunction(quic[i], COL));
    }
    int answer[SIZE] = {6, 4, 8, 3, 1,
                        4, 9, 10, 9, 2,
                        7, 3, 2, 3, 6, 
                        5, 7, 2, 9, 10};
    int search[SIZE];
    for(i = 0; i < SIZE; ++i){
        search[i] = i * 3;
        if(i % 5 == 0){
            puts("");
        }
        printf("%d ", search[i]);
    }
    puts("Enter key: ");
    scanf("%d", &key);
    puts("");
    result = binarySearch(search, 0, SIZE - 1, key);
    if(result != -1){
        printf("Index is: %d\n", result);
    }   
    else{
        puts("ERROR");
    }
    bubbleFunction(answer, SIZE);
    for(i = 0; i < SIZE; ++i){
        if(i % 5 == 0){
            puts("");
        }
        printf("%d ", answer[i]);
    }
}

void bubbleFunction(int a[], size_t size){
    int hold;
    size_t i;
    size_t j;
    for(i = 0; i < size; ++i){
        for(j = 0; j < size; ++j){
            if(a[j] > a[j + 1]){
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
}

int binarySearch(int a[], size_t low, size_t high, size_t searchKey){
    int middle;
    while(low <= high){
        middle = (low + high) / 2;
        if(searchKey == a[middle]){
            return middle; // индекс 
        }
        else if(searchKey < a[middle]){
            high = middle - 1;
        }
        else if(searchKey > a[middle]){
            low = middle + 1;
        }
    }
    return -1;
}

void printArray(int b[][COL], size_t row, size_t col){
    size_t i;
    size_t j;
    for(i = 0; i < row; ++i){
        for(j = 0; j < col; ++j){
            printf("%d ", b[i][j]);
        }
        puts("");
    }
}

float averageFunction(int b[], size_t col){
    size_t i;
    int total = 0;
    float average;
    for(i = 0; i < col; ++i){
        total += b[i];
    }
    average = (float) total / col;
    return average;
}