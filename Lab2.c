
#include<cs50.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main (void)
{
int n = GetInt();
double res=0;

for(int g = 1; g<=n;g++)
{
    double x = 2.0/g;
    double y = pow(x,g);
    double k = 1;

    for (int i = 1; i <= g;i++)
    {
        k*=i;
    }

    res = res + (k*y);
}
printf("%f\n", res);

}
