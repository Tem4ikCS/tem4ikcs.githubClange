#include <stdio.h>

int main()
{
  /*int a = 2, b = 4, c = 6;
  char info[100];
  const char format[] = "(%d x %d x %d)";
  sprintf(info, format, a, b, c);
  puts(info);*/
  int varI = -123;
  char strVar[10];
  sprintf(strVar, "%d", varI);
  puts(strVar);
}