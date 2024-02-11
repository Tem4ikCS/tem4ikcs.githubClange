#include <stdio.h>

unsigned int factorialFunc(int n);
int main()
{
    int number;
    puts("input number");
    scanf("%d", &number);
    printf("%d", factorialFunc(number));
    return 0;
}
unsigned int factorialFunc(int n){
    if(n == 1)
    return 1;
    else
    return n * factorialFunc(n - 1);
}