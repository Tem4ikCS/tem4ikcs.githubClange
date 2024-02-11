#include <stdio.h>
#define SIZE 20

void printArray(const int *const array, const int size);
int binarySearch(const int *const array, int low, int high, int mySearch);
int main()
{
  int myArray[SIZE];
  size_t i;
  int result;
  int searchNumber;
  for(i = 0; i < SIZE; ++i){
    myArray[i] = i * 4;
  }
  puts("Array numbers");
  printArray(myArray, SIZE);
  puts("\nEnter number from 0 to 76");
  printf("%s", "Your number ");
  scanf("%d", &searchNumber);
  result = binarySearch(myArray, 0, SIZE - 1, searchNumber);
  if(result != -1){
    printf("%s", "Yours number under the index:");
    printf(" %d", result);
  }
  else{
    printf("%s", "Number noy found");
  }
}
    
void printArray(const int *const array, const int size){
  size_t i;
  for(i = 0; i < size; ++i){
    if(i % 4 == 0){
      puts("");
    }
    printf("%d ", array[i]);
  }
}

int binarySearch(const int *const array, int low, int high, int mySearch){
  int middle;
  while(low <= high){
    middle = (low + high) / 2;
    if(mySearch == array[middle]){
      return middle;
    }
    else if(mySearch < array[middle]){
      high = middle - 1;
    }
    else if(mySearch > array[middle]){
      low = middle + 1;
    }
  }
  return -1;
}