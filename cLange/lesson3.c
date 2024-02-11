#include <stdio.h>

int main()
{
  char string[10];
  /*int sizeStr = sizeof(string);
  size_t i = 0;
  char *ptrStr = string;
  char symbolMoment;
  while((symbolMoment = getchar()) != '\n' && i < sizeStr - 1){
    ptrStr[i++] = symbolMoment;

  }
  ptrStr[i] = '\0';*/
  fgets(string, sizeof(string), stdin);
  puts(string);
}