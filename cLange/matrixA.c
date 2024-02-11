#include <stdio.h>
#include <stddef.h>
#define LENGTH 4
#define WIDTH 2

void printArray(int myArray[][LENGTH], size_t a, size_t b);
int minimumFunction(int myArray[][LENGTH], size_t a, size_t b);
float averageFunction(int myArrayTWO[], size_t b);

int main()
{
    size_t i;
    int f[WIDTH][LENGTH] =
    {{5, 6, 3, 7},
     {4, 2, 9, 4}};
    printArray(f, WIDTH, LENGTH);
    puts("");
    printf("Minimum is: %d\n", minimumFunction(f, WIDTH, LENGTH));
    for(i = 0; i < WIDTH; i++){
        printf("%d %.2f\n", i, averageFunction(f[i], LENGTH));
    }
}

void printArray(int myArray[][LENGTH], size_t a, size_t b){
    size_t i;
    size_t g;
    for(i = 0; i < a; i++){
        for(g = 0; g < b; g++){
            printf("%d ", myArray[i][g]);
        }
        puts("");
    }
}

int minimumFunction(int myArray[][LENGTH], size_t a, size_t b){
    int minimum = 10;
    size_t i;
    size_t g;
    for(i = 0; i < a; i++){
        for(g = 0; g < b; g++){
            if(myArray[i][g] < minimum){
                minimum = myArray[i][g];
            }
        }
    }
    return minimum;
}

float averageFunction(int myArrayTWO[], size_t b){
    size_t i;
    float total = 0;
    for(i = 0; i < b; i++){
        total += myArrayTWO[i];
    }
    return total / b;
}