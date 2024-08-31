#include<stdio.h>
 int main()
 {
    char a[20], b[20], c[20];
    printf(" \n Enter the name in folloeing formate. \n  NAME     FATHERS_NAME    SURNAME \n");
    printf( " Type The Name :");
    scanf( "%20s", a);
    scanf( "%20s", b);
    scanf( "%20s", c);
 
    // Short Name
    printf(" \n Short Name = "); 
    printf(" %s", a);
    printf(" %.1s.", b);
    printf(" %s", c);

 }