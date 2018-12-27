#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main() {
    string str = GetString();
    int i, letters, longest = 0, longest_pos = 0;
    int smallest = strlen(str), smallest_pos = 0;
    for (i = 0; str[i] != '\0'; i++){
        for (letters = 0; str[i] != '\0' && str[i] != ' '; i++) {
            letters++;  
        }
        if (letters > longest){
            longest = letters;
            longest_pos = i - longest;
        }
        if (letters < smallest){
            smallest = letters;
            smallest_pos = smallest - i;
        }
    }    
    printf("longest: %.*s\n",longest, str + longest_pos);
    printf("smallest: %.*s\n",smallest, str + smallest_pos);
    return 0;
}
