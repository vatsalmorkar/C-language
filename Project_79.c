// Swepping with arrays

#include <stdio.h>

int func1(int x[2])
{
  int temp;
  temp = x[1];
  x[1] = x[0];
  x[0] = temp;
}

int main()
{
  int z[3] = {2,3};
  printf(" %d - %d\n", z[0], z[1]);
  func1(z);
  printf(" %d - %d\n", z[0], z[1]);

  return 0;
}
