// Parking management system for VR PHASE-1

#include<stdio.h>

// Per hour charges for vehicals

#define V1_CAR 50
#define V2_BIKE 10
    //typedef int TIME;


int main ()
{
    {
    printf(" Vehicle Number :  \n \n");
    printf(" Time in 24h Formate : \n \n \n \n");
    printf(" YOU WILL PAY AT THE EXIT \n");
    printf(" ****** THANKS AND VISIT AGAIN ****** \n");
    }

    {
        // automated scan the time the value will be here
        int time = 0;
        // for selecting the type of the vehicle
        int type, total;

        //for checking the logic
        //printf("Enter value for vehicle 1 for car and 0 for bike");
        scanf(" %d", &type);

        if(type == 1)
        total = time * type * V1_CAR;

        else if (type == 0)
        total = time * type * V2_BIKE;

        printf("total %d", total);

    }
}
