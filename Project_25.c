//The total distance travelled by a vehicle in t seconds is given by
// Distance= ut+(at2)/2
//Where u is the initial velocity( meter per second),a is the acceleration (meter per second2).
// Write a program to evaluate the distance travelled at intrevales of time, give the value of u and a. the program should provide the flexibility to the user to select his own time intervals and repeat the calculation for different value of u and a.

#include<stdio.h>

int main()
{
    float d; // distence in meter
    float v; // intial velocity meter per second
    float a; // accelaration in metre per second2
    int t, t1, t2, t3; // time 

        printf(" \n Enter meter :"); scanf(" %f", &d);
        printf(" \n Enter velocity : "); scanf(" %f", &v);
        printf(" \n Enter accelaration : "); scanf(" %f", &a);

        printf(" \n Press- '1' Enter a fix time   OR\n Press- '2' Enter time range in second \n");
        printf("Press 1 OR 2 : ");
        scanf(" %d", &t1);

        if(t1 == 2)
         {
            printf("\n Enter the time range \n");
            printf("Starting time :");
            scanf(" %d", &t2);
            printf("Ending time :");
            scanf(" %d", &t3);

            if(t2 > t3)
            {
                printf(" \n Time Input Error \n");
            }
            else
            {
                for(t2 ; t2<=t3 ; t2++)
                {
                d = v * t + (a * t2 * t2) /2;
                printf("\n Distence  %f is is travelled by a vehicle in %d second \n", d, t2);
                }
            }   
         }
        else if (t1 == 1)
         {
            printf(" Enter the fix time : ");
            scanf(" %d", &t);
            d = v * t + (a * t * t) /2;
            printf("Your %.2f is the total Distence travelled by a vehicle in %d second", d, t);
         }
        else if (t1 != 1 && t1 !=2)
        {
            printf(" \n Time Input Error \n");
        }
}
