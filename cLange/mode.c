#include <stdio.h>
#include <stddef.h>
#define SIZE 16

int main()
{
    size_t i;
    int largestVal = 0;
    int modeValue = 0;
    int answer[SIZE] = {6, 7, 5, 4, 8, 5, 6, 6, 7, 4, 5, 6, 7, 5, 6};
    int frequency[SIZE] = {0};
    for(i = 0; i < SIZE; i++){
        ++frequency[answer[i]];
    }
    for(i = 1; i < 10; i++){
        printf("%d %d\n", i, frequency[i]);
    if(frequency[i] > largestVal){
        largestVal = frequency[i];
        modeValue = i;
        }
    }
    puts(" ");
    printf("%d %d", largestVal, modeValue);
}