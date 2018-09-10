#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main (void)
{
printf("Temperature in F: ");
float tem = GetFloat();
float cel = 5.0/9.0*(tem-32.0);
printf("%.1f\n", cel);

}
