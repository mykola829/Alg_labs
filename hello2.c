#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Your name please:\n");
    string s = GetString();
    printf("hello, %s\n" , s); 
}

