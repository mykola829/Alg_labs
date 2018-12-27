#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>

int main(){
    int n = GetInt();
    int m = GetInt();
    int** array = (int**)calloc(n,sizeof(int));  
    for(int i = 0; i < n; i++){
        array[i] = (int*)calloc(m,sizeof(int));
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            array[i][j] = rand() % 10;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%i ",array[i][j]);
        }
        printf("\n");
    }
    int k = GetInt();
    array = (int**)realloc(array,(n-k)*sizeof(int));
    for(int i = 0; i < n-k; i++){
        for(int j = 0; j < m; j++){
            printf("%i ",array[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++){
        free(array[i]);
    }
    free(array);
}
