#include <stdio.h>

void bubbleSort(int *const a, size_t size);

int main()
{
  int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  size_t i;
  /*for(i = 0; i < 10; ++i){
    printf("%d ", array[i]);
  }
  bubbleSort(array, 10);
  puts("");
  for(i = 0; i < 10; ++i){
    printf("%d ", array[i]);
  }*/
  int *const aPtr = array;
  for(i = 0; i < 10; ++i){
    *array = i * 3;
  }
  printf("%d", *aPtr);

}

void bubbleSort(int *const a, size_t size){
  int pass;
  int hold;
  size_t i;
  for(pass = 0; pass < size - 1; ++pass){
    for(i = 0; i < size - 1; ++i){
      if(a[i] > a[i + 1]){
        hold = a[i];
        a[i] = a[i + 1];
        a[i + 1] = hold;
      }
    }
  }
}