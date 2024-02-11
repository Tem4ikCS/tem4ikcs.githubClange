#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = atoi("123");
  long b = atol("23312321333");
  long long c = atoll("74837483724982847829");
  double d = atof("56.2323");
  printf("%d\n%ld\n%lld\n%f", a, b, c, d);
}