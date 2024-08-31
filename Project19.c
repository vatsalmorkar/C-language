//The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a program to get these values from the user and display the prices as follows:
//         ***LIST OF ITEMS***
//            Item                 Price
//            Rice                 Rs 16.75
//            Sugar               Rs 15.00

#include <stdio.h>

main ()

{
    float RISE = 16.75;
    float SUGER = 15.00;

    printf("*** LIST OF ITEMS *** \n");
    printf("Item \t Price \n");
    printf("RISE \t %2.2f \n", RISE);
    printf("SUGER \t %2.2f", SUGER);

}