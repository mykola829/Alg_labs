#include <cs50.h>
#include <stdio.h>

int main(void)
{
printf("Please give me an integer between 1 and 10: ");

int x = GetInt();

switch (x)
{
   case 1:
   case 2:
   case 3:
     printf("You picked small integer\n");
          break;

   case 4:
   case 5:
   case 6:
   case 7:
     printf("You picked medium integer\n");
          break;
   case 8:
   case 9:
   case 10:
      printf("You picked a large integer\n");
          break;

    default:
       printf("You picked an invalid integer\n");
          break;

}
}
