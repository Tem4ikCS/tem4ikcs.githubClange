#include <stdio.h>

int main()
{
  char arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  /*char *arrPtr = arr[1];
  printf("%d ", *arrPtr);*/
  char (*arrrayPtr)[3] = arr;
  char x = arrrayPtr[0][2];
  printf("\n%d", x);
}  
