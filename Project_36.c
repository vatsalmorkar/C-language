//Write a program to read the following numbers, round them off to the nearest integers and print out the  results in integer form:
//35.7        50.21         -23.73        -46.45
#include<stdio.h>

int main()
{
    float a, y;
    int x;
    printf(" \n Press 0 To Exit The Program \n");
    while(1)
    {   
        printf(" \n Enter Number You Want To Roundoff : \n");
        scanf(" %f",&a);

        if(a == 0)
        {
            break;
        }
        else
        {
            x = a;
            if(a > 0){
                y = a - x;
                    if( 0.5 <= y >= 0.9 ){
                    printf(" Your Round Off Value is %d \n", x + 1);}
                    else{
                    printf(" Your Round Off Value is %d \n", x);}
            }
            else if(a < 0){
                y = -a +x;
                    if(0.5 >= y <= 0.9){
                    printf(" Your Round Off Value is %d \n", -x + 1);}
                    else{
                    printf(" Your Round Off Value is %d \n", x);}
            }
        }
    
    }
}

#include<stdio.h>
#include<conio.h>
int main()
   {
   int p,i;
   float a;
   printf("ENTER  REAL NUMBER  FOR GET NEAREST INTEGER NUMBER\n");
       for(i=1;i<=4;i++)
       {
       scanf("%f",&a);
       if(a>=0)
            p=a+0.5;
       else
            p=a-0.5;
              printf("\nNEAREST INTEGER NUMBER OF  %f IS= %d\n",a,(int)p);
       }
   }
