#include <stdio.h>
#include <stddef.h>
#define SIZE 11

int main()
{
    size_t i;
    size_t d;
    int answersArr[SIZE] = {2, 5, 5, 7, 7, 7, 8, 9, 10, 10};
    int frequencyArr[SIZE] = {0};
    for(i = 0; i < SIZE; i++){
        ++frequencyArr[answersArr[i]];
    }
    for(i = 1; i < SIZE; i++){
        printf("%d %d ", i, frequencyArr[i]);
        for(d = 1; d <= frequencyArr[i]; d++){
            printf("%c ", '*');
        }
        puts(" ");
        
    }

}