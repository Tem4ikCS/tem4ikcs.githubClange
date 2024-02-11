#include <stdio.h>
#include <stddef.h>
#define SIZE 20
#define WORKSIZE 11

void frequencyFunction(int b[], int freq[]);
void modeFunction(int freq[]);
void bubbleSort(int b[]);
size_t binarySearch(int c[], size_t low, size_t high, int searchKey);

int main()
{
    size_t i;
    int result;
    int key;
    int search[SIZE];
    int a[SIZE] = {7, 6, 3, 5, 2,
                   8, 3, 2, 9, 10,
                   1, 3, 6, 3, 4,
                   5, 8, 5, 6, 10};
    int frequency[WORKSIZE] = {0};
    frequencyFunction(a, frequency);
    modeFunction(frequency);
    bubbleSort(a);
    for(i = 0; i < SIZE; i++){
        printf("%d ", a[i]);
        if(i % 5 == 0){
            puts("");
        }
    }
    for(i = 0; i < SIZE; i++){
        search[i] = 3 * i;
        
        if(i % 5 == 0){
            puts("");
        }
         printf("%d ", search[i]);
    }
    scanf("%d", &key);
    result = binarySearch(search, 0, SIZE - 1, key);
    if(result != -1){
        printf("Index is %d", result);
    }
    else if(result == -1){
        puts("ERROR!");
    }
}

void frequencyFunction(int b[], int freq[]){
    size_t i;
    for(i = 0; i < SIZE; i++){
        ++freq[b[i]];
    }
    for(i = 1; i < WORKSIZE; i++){
        printf("%d %d", i, freq[i]);
        puts("");
    }
    puts("");
}

void modeFunction(int freq[]){
    int largestVal = 0;
    int modeVal = 0;
    size_t i;
    for(i = 1; i < WORKSIZE; i++){
        if(largestVal < freq[i]){
            largestVal = freq[i];
            modeVal = i;
        }
    }
    printf("%d %d\n", modeVal, largestVal);
}

void bubbleSort(int b[]){
    int hold;
    size_t i;
    size_t d;
    int median = 0;
    for(i = 0; i < SIZE; i++){
        for(d = 0; d < SIZE; d++){
            if(b[d] > b[d + 1]){
                hold = b[d];
                b[d] = b[d + 1];
                b[d + 1] = hold;
            }
        }
    }
    median = b[SIZE / 2];
    printf("Median is: %d\n", median);
}

size_t binarySearch(int c[], size_t low, size_t high, int searchKey){
    int middle;
    while(low <= high){
        middle = (low + high) / 2; // индекс 
        if(searchKey == c[middle]){
            return middle;
        }
        else if(searchKey < c[middle]){
            high = middle - 1;           
        }
        else if(searchKey > c[middle]){
            low = middle + 1;           
        }
    }
    return -1;
}