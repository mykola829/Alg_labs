#include<stdio.h>
#include<cs50.h>

int main(void)
{
printf("Enter n and m please:\n");
   int n = GetInt(); 
   int m = GetInt();
   n--;
      int r1 = n-m;
      printf("1)%i\n", r1);

   if((m--)<n)           //m--<n
   {
   printf("2) True\n");
   }
      else 
      {
      printf("2) False\n");
      }
   
   if((n++)>m)        //n++>m
   {
   printf("3) True\n");
   }
      else
      {
      printf("3) False\n");
      }


}
