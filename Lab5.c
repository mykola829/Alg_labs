#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void func(int m, int n, int array[m][n]);

int main(void)
{
    printf("Enter number of rows:\n");
    int m = GetInt();
    printf("Enter the number of columns:\n");
    int n = GetInt();
    int array[m][n];
    int i, j;
    for(i = 0; i < m; i++)
    {        
        for(j = 0; j < n; j++)
        {
            printf("Enter [%i][%i] element of the matrix:\n",i,j);
            array[i][j] = GetInt();
        }
    } 
    func(m, n, array);
} 
   
void func(int m, int n, int array[m][n])
{
    int i, j;
    int counter = 0;     
    for(j = 0; j < n-1; j++)
    {
        int sum = 0;            
        for(i = 0; i < m;i++)
        {
            sum+=array[i][j]; 
        }
        double average = sum/m;
        for(int q = j+1; q < n; q++)
        {                    
            for(int p = 0; p < m;p++)
            { 
                if(array[p][q] > average)
                {
                    counter++;
                }
            }
        }     
        sum = 0;
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%i\t", array[i][j]);
        }
        printf("\n");               
    }                                            
    printf("Result: %i\n", counter);  
}
