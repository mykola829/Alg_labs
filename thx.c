#include <stdio.h>
#include <cs50.h>

int main(void)
{
printf("Please give an integer between 1 and 10: ");
int x = GetInt();
if  (x >= 1 && x <= 3)
{
printf("You picked a small int\n");
}
else if  (x >= 4 && x <= 7)
{
printf("You picked a medium int\n");
}
if  (x >= 8 && x <= 10)
{
printf("You picked a large int\n");
}

}

