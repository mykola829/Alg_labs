#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){ 
                                                                                    
    printf("Enter the stack size:\n");
    int size = GetInt();
    int stack[100];
    for(int i = 0; i < size; i++){
        printf("Enter %i element of the array:\n",i);
        stack[i] = GetInt();
    }
        while(true){       
            printf("Enter 1 if you want to add an element to the array or enter 2 if you want to remove an element from the array: \n");        
            int x = GetInt();
            if(x==1){
                printf("Enter the new stack item:\n");
                int item = GetInt();            
                size++;
                stack[size-1] = item;
                printf("New stack:\n");            

            for(int i = 0; i < size;i++){
                printf("%i\n", stack[i]);
            }
            continue;
        } else {
        if(x==2){
            size--;
            printf("New stack:\n");                 
            for(int i = 0; i < size;i++){
                printf("%i\n", stack[i]);
            }
            continue;
        }
        else{
            return 0;
        }
        }
        }        
    }                     
