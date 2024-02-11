#include <stdio.h>
#include <stddef.h>

int main()
{
  int a; // целочисленная переменная 
  int *aPtr; // указатель на целочисленную переменную
  // инициализация 
  a = 7;
  aPtr = &a; // адресс переменной а
  printf("The adress of a is %p"
  "\nThe value of aPtr is %p\n", &a, aPtr); // адресс

  printf("\nThe value of a is %d"
  "\nThe value of *aPtr is %d", a, *aPtr);

  printf("\n\nShowing that * and & are completed of"
  "each other\n&*aPtr = %p"
  "\n*&aPtr = %p\n", &*aPtr, *&aPtr);


}