#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>

void write();
void copy();
void detect();

FILE *in;
FILE *out;

int main()
{
    write();
    copy();
}

void write()
{
    char str[40];
    if((in = fopen("lab9.txt","w")) == NULL)exit(1);
    for(int i = 0; i < 10; i++)
    {               
        printf("Enter string: ");
        fgets(str,40,stdin);
        fputs(str,in);              
    }
    fclose(in);
}

void copy()
{
    int counter = 0;
    int i = 0, j = 0;
    char s; 
    char str[10][100] = {};
    FILE *read;
    FILE *write;
    read=fopen("lab9.txt", "r");
    while((s = getc(read)) != EOF)
    {
        str[j][i++]=s;
        if(s == '.')
        {
            j++;
        }
    } 
    fclose(read);
    char str1[50] = {};
    int word_counter = 0;
    if((read = fopen("lab9a.txt","r")) == NULL)exit(3);
    fgets(str1,40,read);
    fclose(read);
    for(int i = 0; i < 50; i++){
        if(str1[i] == ' ' && str1[i+1] != ' '){
            word_counter++;
        }    
    }
printf("Number of words in first string: %i\n", word_counter+1);
    if((write = fopen("lab9a.txt","w")) == NULL)exit(3);
    for(int g = 0; g < 10;g++)
    {    
        for(int k = 0; k < 100; k++)
        {
            if(str[g][k] == ' ' && str[g][k+1] != ' ' && str[g][k+1] != '.')
            {
                counter++;
            }     
        }
        for(int r = 0; r < 100; r++){
            if(counter >= 2)
            {
                fputc(str[g][r],write);     
            }
        }
        counter = 0;       
    }           
    fclose(write);
    
}






