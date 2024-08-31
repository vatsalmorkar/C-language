// Write a programe do follwing:
// Declare x and y as integer variables and z as a short integier vatiable

#include<stdio.h>

main()
{
    int x, y;
    //short int z;
    long int z;

    x = 123456;
    y = 234561;

    z = x + y;

    printf(" %d \n %d \n",x, y);
    printf (" %d", z);


}

// "Short int z" can hold the max value 30337 if we use "long int z" it will done the job.