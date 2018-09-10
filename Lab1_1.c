#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main (void)
{

    float a = 1000.0;
    float b = 0.0001;

       int a1 = a*10000;
       a1 = round(a1);
       
       int b1 = b*10000;
       b1 = round(b1);
       

    float r1 = pow(a1 + b1,3) - (pow(a1,3)+3*(pow(a1,2))*b1)/3*a1*(pow(b1,2)) + pow(b1,3);
    double r2 = pow(a1 + b1,3) - (pow(a1,3)+3*(pow(a1,2))*b1)/3*a1*(pow(b1,2)) + pow(b1,3);
    
    printf("Result for float is: %.30f\nResult for double is: %.30f\n", r1, r2);
}
