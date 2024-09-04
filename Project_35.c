// Given the string“WORDPROCESSING”, Write  a program to read the string from the terminal and Display the same in the following format:
//  (a)WORD PROCESSING
//  (b)WORD
//     PROCESSING
//  (c)W.P.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[4]; 
    char b[12];
    printf(" Enter Word : ");
    scanf(" %4s, %12s", a, b);
    printf(" %-4s %-12s \n", a, b);
    printf( "%-4s \n %-12s \n", a, b);
    printf(" %-0.1s, %-0.1s", a, b);
    
}
