//The total distance travelled by a vehicle in t seconds is given by
// Distance= ut+(at2)/2
//Where u is the initial velocity( meter per second),a is the acceleration (meter per second2). Write a program to evaluate the distance travelled at intrevales of time, give the value of u and a. the program should provide the flexibility to the user to select his own time intervals and repeat the calculation for different value of u and a.

#include<stdio.h>

int main()

/*{
    float d; // distence in meter
    float v; // intial velocity meter per second
    float a; // accelaration in metre per second2
    float t; // time intervals

        printf(" Enter meter : \n"); scanf(" %f", &d);
        printf(" Enter velocity : \n"); scanf(" %f", &v);
        printf(" Enter accelaration : \n"); scanf(" %f", &a);
        printf(" Enter time : \n"); scanf(" %f", &t);

            d = v * t + (a * t * t) /2;
            printf(" %f", d);   
}*/

{
    float d; // distence in meter   
    float v; // intial velocity meter per second
    float a; // accelaration in metre per second2
    //float t; // time intervals
    int t; //time intervals
    int l; //total hours you need data for
    int x, y;

//        printf(" Enter meter : \n"); scanf(" %f", &d);
//        printf(" Enter velocity : \n"); scanf(" %f", &v);
//        printf(" Enter accelaration : \n"); scanf(" %f", &a);
        printf(" Enter howmuch hours intevals you need data : \n"); scanf(" %f", &t);
        printf(" Enter hours you reqired data : \n"); scanf(" %f", &l);

           for(y = 1; y<l; y++)
           {
                x = l%t; // logic for calculating for different user intervals
                printf(" %d \n", x);
           } 
                        
//            if(x == 0)
//            {
//                d = v * t + (a * t * t) /2;
//               printf(" %f", d);
//            }
               
}