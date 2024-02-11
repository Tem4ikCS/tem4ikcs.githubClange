#include <stdio.h>

int main()
{
    int s = 0;
    for(size_t i = 0; i <= 10; ++i){
        for(size_t j = 7; j >= 5; --j){
            if(i - j < 0){
                goto exisSum;
            }
            s += i - j;
        }
    }
    exisSum: printf("s = %d", s);
}