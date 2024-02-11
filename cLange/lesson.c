#include <stdio.h>
#define SIZE 10

void bubbleSort(int *const array, size_t size);

int main()
{
  int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
  size_t i;
  puts("Data items in original array");
  for(i = 0; i < SIZE; ++i){
    printf("%d ", a[i]);
  }
  puts("");
  puts("Data items in ascending array");
  bubbleSort(a, SIZE);
  for(i = 0; i < SIZE; ++i){
    printf("%d ", a[i]);
  }
}

void bubbleSort(int *const array, size_t size){
void swap(int *elementPtr, int *element2Ptr);
  int pass;
  size_t i;
  for(pass = 0; pass < size - 1; ++pass){
    for(i = 0; i < size -1; ++i){
      if(array[i] > array[i + 1]){
        swap(&array[i], &array[i + 1]);
      }
    }
  }
}

void swap(int *elementPtr, int *element2Ptr){
  int hold = *elementPtr;
  *elementPtr = *element2Ptr;
  *element2Ptr = hold;
}