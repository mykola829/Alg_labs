#include<cs50.h>
#include<stdio.h>
int main (void)
{
int x;
do
{
printf("Please give me a positive integer: ");
x = GetInt();
}
while( x < 1);
printf("Thx for positive integer\n");

}
