//Howmany Number of students fits in to the criteria deciding program
#include <stdio.h>
#include <string.h>

int main()
{
    char x[10];
    int y;
    int count1 = 0, count2 = 0;

    printf (" Type 'EXIT' in the name after all the input");

    while(1)
    {
        printf (" Enter The Name : \n");
        scanf (" %10s", x);

        if(strcmp(x, "EXIT") == 0 || strcmp(x, "exit") == 0)
            {
                break;
            }
        else
            {
                printf (" Enter the Marks Obtain :");
                scanf (" %d", &y);
                if( y > 80 && y < 100)
                {
                    count1++;
                }
                else if( y > 60 && y < 80)
                {
                    count2++;
                }
            }
        }
    printf(" Number of students more than 80 marks are : %d", count1);
    printf(" Number of students more than 60 and less than 80 marks are : %d", count2);
    


}
