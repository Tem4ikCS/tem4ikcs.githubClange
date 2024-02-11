#include <stdio.h>

int main()
{
  int arrayOne[] = {0, 1, 2, 3, 4, 5};
  int arrayTwo[10];
  int arrayLenght = sizeof(arrayOne) / sizeof(*arrayOne);
  size_t i;
  for(i = 0; i < arrayLenght; ++i){
    arrayTwo[i] = arrayOne[i];
  }
  for(i = 0; i < arrayLenght; ++i){
    printf("%d ", arrayTwo[i]);
  }
}