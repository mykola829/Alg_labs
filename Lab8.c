#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


typedef struct {
    char name[10];
    char car_id[10];
    char pass[10];
    char reg_department[10];
}car_owner;

int s = 0;
car_owner mas[10];
car_owner mas1[10];

char c;
FILE *f;

void write();
void delete();
void add_begin();

int main(){
    while(true){   
        printf("Enter 1 to add car owner, 2 to delete, 3 to add in begin: ");
        int choice = GetInt();
        if(choice == 1){
            write();
        }
        else if(choice == 2){
            delete();
        }
        else if(choice == 3){
            add_begin();
        }
        else{
            return 1;
        }       
        return 0;
    }       
}

void write(){   
    printf("Enter the number of people you want to add:");
    int k = GetInt();
    for(int i = 0; i < k; i++){   
        if((f = fopen("lab8.dat","ab")) == NULL)exit(1); 
        printf("Enter name: ");
        scanf("%s", mas[i].name);
        printf("Enter car id: ");
        scanf("%s", mas[i].car_id);
        printf("Enter passport number: ");
        scanf("%s", mas[i].pass);
        printf("Enter registration department: ");
        scanf("%s", mas[i].reg_department);      
        fwrite(&mas[i],sizeof(car_owner),1,f);
    }
    fclose(f);    
}

void delete(){  
    char id[10];
    printf("Enter car id of element you want to delete: ");
    scanf("%s",id);
    if ((f = fopen("lab8.dat", "rb")) == NULL)exit(2);
    for (int i =0 ; i < 10; i++)
    {
        fread(&mas[i], sizeof(mas[i]), 1, f);
    }
    fclose(f);
    if((f = fopen("lab8.dat", "wb")) == NULL)exit(3);
    for (int i = 0 ; i < 10; i++)
        if(strcmp(mas[i].car_id, id) == 0 ){  
            for(int j = 0; j < 10; j++){ 
                if(i != j){
                    fwrite(&mas[j],sizeof(car_owner),1,f);   
                }
            }        
        }
    fclose(f);  
}

void add_begin(){
    if((f = fopen("lab8.dat","rb")) == NULL)exit(4);
    for(int i = 0; i < 10; i++){
        fread(&mas1[i], sizeof(mas1[i]), 1, f);
    }
    fclose(f);
    if((f = fopen("lab8b.dat","ab")) == NULL)exit(4); 
    for(int i = 0; i < 10; i++){
        fwrite(&mas1[i],sizeof(mas1[i]),1,f);        
    }
    fclose(f);  
    if((f = fopen("lab8.dat", "wb")) == NULL)exit(3);
    printf("Enter name: ");
    scanf("%s", mas[0].name);
    printf("Enter car id: ");
    scanf("%s", mas[0].car_id);
    printf("Enter passport number: ");
    scanf("%s", mas[0].pass);
    printf("Enter registration department: ");
    scanf("%s", mas[0].reg_department); 
    fwrite(&mas[0],sizeof(car_owner),1,f);        
    fclose(f);  
    if((f = fopen("lab8.dat","ab")) == NULL)exit(4);
    for(int i = 0; i < 10; i++){
            fwrite(&mas1[i],sizeof(mas1[i]),1,f);        
    }
    fclose(f);   
   
}







