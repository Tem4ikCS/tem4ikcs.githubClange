#include <stdio.h>
#define SIZE 11

void printArray(const int *const arrayPtr, int size);
void sortArray(int *const arrayPtr, int size);

int main()
{
  int array[SIZE] = {10, 9, 8, 8, 6, 7, 4, 5, 3, 1, 2};
  int dellIndex = 0;
  printArray(array, SIZE);
  sortArray(array, SIZE);
  printArray(array, SIZE);
  size_t i;
  for(i = 0; i < SIZE  - 1; ++i){
    if(array[i] == array[i + 1]){
     dellIndex = i + 1;
    }
  }
  for(i = dellIndex; i < SIZE; ++i){
    array[i] = array[i + 1];
  }
  printArray(array, SIZE - 1);
}

void printArray(const int *const arrayPtr, int size){
  size_t i;
  for(i = 0; i < size; ++i){
    printf("%d ", arrayPtr[i]);
  }
  puts("");
}

void sortArray(int *const arrayPtr, int size){
  void swap(int *arrayPtrOne, int *arrayPtrTwo);
  size_t pass;
  size_t i;
  for(pass = 0; pass < size - 1; ++pass){
    for(i = 0; i < size - 1; ++i){
      if(arrayPtr[i] > arrayPtr[i + 1]){
        swap(&arrayPtr[i], &arrayPtr[i + 1]);
      }
    }
  }
}

void swap(int *arrayPtrOne, int *arrayPtrTwo){
  int hold = 0;
  hold = *arrayPtrOne;
  *arrayPtrOne = *arrayPtrTwo;
  *arrayPtrTwo = hold;
}