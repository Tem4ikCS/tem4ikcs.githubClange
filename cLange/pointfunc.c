#include <stdio.h>

int getPer(int width, int heihht);
int main()
{
  int a = 5;
  int b = 5;
  printf("%d", getPer(a, b));
  
}

int getPer(int width, int heihht){
  return 2*(width+heihht);
}