#include<stdio.h>
#include<cs50.h>

int main(void)
{
    printf("Give me an integer: ");
    int x = GetInt();
     
    if (x>0)
    {
    printf("You picked a positive number!\n");
    
    }
    else if (x<0)
    {
    printf("You picked a negative number!\n");
    }
    else
    {
    printf("You choose zero!\n");
    }
} 


