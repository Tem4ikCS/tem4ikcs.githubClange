#include <stdio.h>

int main()
{
    int myArray[10] = {3, 6, 2, 9, 3};
    int index = 2;
    size_t i;
    for(i = 9; i > index; --i){
        myArray[i] = myArray[i - 1];
    }
    myArray[2] = 4;
    for(i = 0; i < 10; ++i){
        printf("%d ", myArray[i]);
    }

}