#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main (void)
{

    float a1 = 1000.0;
    float b1 = 0.0001;
    
    double a2 = 1000.0;
    double b2 = 0.0001;

       
       

    float r1 = (pow(a1 + b1,3) - (pow(a1,3)+3*(pow(a1,2))*b1))/(3*a1*(pow(b1,2)) + pow(b1,3));
    double r2 = (pow(a2 + b2,3) - (pow(a2,3)+3*(pow(a2,2))*b2))/(3*a2*(pow(b2,2)) + pow(b2,3));
    
    printf("Result for float is: %.30f\nResult for double is: %.30f\n", r1, r2);
}
