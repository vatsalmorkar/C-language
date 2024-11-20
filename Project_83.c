// Find the total number of pairs in the array three whose sum is equal to the given value x

#include <stdio.h>

int main()
{
  int y, x, z, a, m=0, n, f;

  printf("Howmany numbers you want to enter :");
  scanf(" %d", &y);
  int array1[y];
  
  printf(" Enter %d number followed by enter \n", y);
  for (int i=0 ; i<y ; i++)
  {
    scanf(" %d", &array1[i]);
  }

  printf("Enter the number you want to find an equivalent :");
  scanf(" %d", &n);  

  for (int i=0 ; i<y ; i++)
  {
    x = array1[i];

    for (int j=i+1 ; j<y ; j++)
    {
      a = array1[j];

      for(int k=j+1 ; k<y ; k++)
      {
        f = array1[k];
        
        z = x + a + f;
        if (z == n)
        { 
          printf(" pair %d = %d and %d and %d \n", m+1, x, a, f);
          m++;
        }
      }
    }
  }
  printf(" Total number of pairs : %d", m++);
  
  return 0;
}
