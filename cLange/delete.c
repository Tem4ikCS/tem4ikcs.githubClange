#include <stdio.h>


int main()
{
    int numbers[10] = {5, 6, 3, 6, 8, 2, 1, 5, 3, 2};
    int delIndex = 3;
    size_t i;
    for(i = delIndex; i < 8; ++i){
        numbers[i] = numbers[i + 1];
    }
    numbers[9];
    for(i = 0; i < 10; ++i){
        printf("%d ", numbers[i]);
    }
}