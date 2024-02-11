#include <stdio.h>
#include <stddef.h>
#define SIZE 5
unsigned int modifyArr(int b[], size_t size);

int main()
{
    int myArr[SIZE] = {0, 1, 2, 3, 4};
    size_t i;
    for(i = 0; i < SIZE; i++){
        printf("%d", myArr[i]);
    }
    puts("");
    modifyArr(myArr, SIZE);
    for(i = 0; i < SIZE; i++){
    printf("%d", myArr[i]);
    }
    return 0;
}
unsigned int modifyArr(int b[], size_t size){
    size_t i;
    for(i = 0; i < SIZE; i++){
        b[i] *= 2;
    }
}