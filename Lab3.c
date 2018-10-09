#include<math.h>
#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
int main()
{
double y;
double current=0;

    for(double x = 0.1; x<=1; x+=0.09)
        {
            y = (1 - (pow(x,2))/2)*cos(x) - x/2*sin(x);
            printf("Y = %f for x = %f\n", y, x);
        }
    printf("\n");   
    for(double x = 0.1; x<=1; x+=0.09)
        {
        double result = 0 ;
            for(int n = 1; n <= 35; n++)
                {                                                     
                    double k = 1;                                                       
                    for (int i = 1; i <= n;i++)
                        {
                            k*=i;
                        }
                 current = ((pow(-1,n))*(pow(x,2*n))*(2*(pow(n,2)) + 1))/k;
                 result+=current;                                                                                                                 
                }


            printf("SN = %f for x = %f\n", result, x);
        }
        printf("\n");
        for(double x = 0.1; x<=1; x+=0.09)
        {
        double result = 0 ;
            for(int n = 1; n <= 35; n++)
                {                                                     
                    double k = 1;                                                       
                    for (int i = 1; i <= n;i++)
                        {
                            k*=i;
                        }
                 current = ((pow(-1,n))*(pow(x,2*n))*(2*(pow(n,2)) + 1))/k;
                 if(fabs(current) < 0.0001)break;

                 result+=current;                                                                                                                 
                }


            printf("SE = %f for x = %f\n", result, x);
        }




}
