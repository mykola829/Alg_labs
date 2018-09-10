#include <cs50.h>
#include <stdio.h>

int main(void)
{
printf("Please pick int between 2 and 23: ");
int x = GetInt();
string y = "#";

do
{
printf("\n",x ,y ,x*y);

}
while( 2 <= x <= 23);


}
