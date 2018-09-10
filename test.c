#include<stdio.h>
#include<cs50.h>
/*
 *variant 24
 *
 */
int main(void)
{
    int n;
    int m;
    printf("vvedit n ta m vidpovidno:\n");
    n = GetInt(), n++;								//інкрементація n
    m = GetInt();
        int F = n*m;								// Умова n++*m
        printf("n++*m=%i\n",F);

        if(n<m)									// Умова n++<m
        {
        printf("%i<%i\n", n, m);				   
        }
        else if(n==m)								// Якщо n=m
             {
             printf("n = m\n");
             }
             else
                 {
                 printf("%i>%i\n", n, m);
                 }

             if(m-1>m)								// Умова m-->m
             {
             printf("%i>%i\n", m-1, m);
             }
             else
		{
		printf("umova, de m-->m ne vikonuetsa\n");
		}
}
