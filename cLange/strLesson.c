#include <stdio.h>
#include <string.h>

int main()
{
  char source[100] = "String";
  char sourceOne[10];
  char str[15] = "Addition";
  // копирование
  strcpy(sourceOne, source);
  puts(sourceOne);

  int maxLen = sizeof(sourceOne) - 1;
  strncpy(sourceOne, source, maxLen);
  puts(sourceOne);
  // вычисдение символов
  size_t lenght = strlen(source);
  printf("%zu", lenght);

  // добавление строки
  strcat(source, str);
  puts(source);
}