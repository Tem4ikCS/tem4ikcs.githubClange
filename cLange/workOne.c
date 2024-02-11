#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
#define WORKSIZE 10
void modeFunction(int b[]);
void bubbleFunction(int b[]);
int main()
{
    size_t i;
    int answer[SIZE] = {6, 7, 3, 2, 7,
                        2, 9, 9, 6, 8,
                        1, 2, 7, 3, 5, 
                        8, 9, 3, 9, 5};
    modeFunction(answer);
    puts("");
    bubbleFunction(answer);
    for(i = 0; i < SIZE; i++){
        printf("%d ", answer[i]);
    }
    puts("");
    srand(time(NULL));
    int VAL = 1 + rand() % 10;
    printf("%d", VAL);
}
void modeFunction(int b[])
{
    size_t g;
    size_t d;
    int freq[WORKSIZE] = {0};
    int modeValue = 0; // 1 - 9
    int largestValue = 0; // 0 - 20
    for(d = 0; d < SIZE; d++){
        ++freq[b[d]];
    }
    for(g = 1; g < WORKSIZE; g++){
        if(freq[g] > largestValue){
            modeValue = g;
            largestValue = freq[g];
        }
    }
    printf("mode: %d largest: %d", modeValue, largestValue);
}
void bubbleFunction(int b[])
{
    int hold = 0;
    size_t f;
    size_t h;
    for(f = 0; f < SIZE + 1; f++){
        for(h = 0; h < SIZE + 1; h++){
            if(b[h] > b[h + 1]){
                hold = b[h];
                b[h] = b[h + 1];
                b[h + 1] = hold;
            }
        }
    }
}