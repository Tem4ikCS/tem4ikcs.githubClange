#include <stdio.h>
#include <stddef.h>
#define SIZE 25
#define WORKSIZE 11

void modeFunction(int freq[]);
void bubbleFunction(int b[]);
void freqFunction(int b[], int freq[]);

int main()
{
    int answer[SIZE] = {6, 5, 8, 3, 2,
                        6, 8, 9, 10, 4,
                        4, 7, 5, 6, 9,
                        1, 2, 8, 5, 9,
                        3, 5, 7, 4, 3};
    int frequency[WORKSIZE] = {0};
    freqFunction(answer, frequency);
    puts("");
    modeFunction(frequency);
    puts("");
    bubbleFunction(answer);
    
}
void freqFunction(int b[], int freq[]){
    size_t i;
    for(i = 0; i < SIZE; i++){
        ++freq[b[i]];
    }
    for(i = 1; i < WORKSIZE; i++){
        printf("%d %d",i, freq[i]);
        puts("");
    }
}
void modeFunction(int freq[]){
    size_t i;
    int largestVal = 0;
    int modeVal = 0;
    for(i = 1; i < WORKSIZE; i++){
        if(freq[i] > largestVal){
            largestVal = freq[i];
            modeVal = i;
        }
    }
    printf("Mode value is: %d\nFrequensy this value is: %d", modeVal,largestVal);
}
void bubbleFunction(int b[]){
    size_t i;
    size_t d;
    int hold = 0;
    int median = 0;
    for(d = 0; d < SIZE; d++){
        for(i = 0; i < SIZE; i++){
            if(b[i] > b[i + 1]){
                hold = b[i];
                b[i] = b[i + 1];
                b[i + 1] = hold;
            }
        }
    }
    for(i = 0; i < SIZE; i++){
        printf("%d ", b[i]);
    }
    puts("");
    median = b[SIZE / 2];
    printf("Median is: %d", median);
}