//write a program to count and print the number of negative and positive numbers in a given set of numbers test tour program with a suitable set of numbers use scanf to read the numbers reading should be terminated when the value 0 is encountered

#include <stdio.h>

int main()
{
    int a, y, z;
    y = 0;
    z = 0;

    while(1)
        {
            printf (" value a : ");
            scanf (" %d", &a);

            if(a == 0)
              {
                printf("Exiting ... ");
                break;
              }

            if (a < 0)
              {
                y++;
              }
            else if (a > 0)
              {
                z++;
              }
            printf ("Less than numbers equal to =  %d \n", y);
            printf ("Greater than numbers equal to =  %d \n", z);
        }
}
