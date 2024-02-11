#include <stdio.h>
#include <stddef.h>

int main()
{
    int a[] = {55, 34, 67, 22};
    int min = a[0];
    int max = a[0];
    size_t i;
    for(i = 0; i <= 3; i++){
        if(min > a[i]){
            min = a[i];
            
        }
        puts("");
        if(max < a[i]){
            max = a[i];
            
        }
    }
     printf("%d", max);
     printf("%d", min);
}