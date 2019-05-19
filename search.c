#include<stdio.h>
#include "phone.h"
#include<string.h>
void searchByName()
{
    int a;
    int num=100;
    char name[10];
    printf("Search by Name\n");
    printf("Enter a name to search : ");
    scanf("%s", &name);
    for(a=0; a<size; ++a){
      if(strcmp(name, PhoneBook[a].Name)==0){
        num=a;
      }
    }
    if(num!=100){
        printf("%s     %s\n", PhoneBook[num].Name, PhoneBook[num].PhoneNumber);
    }
    else{
        printf("Oops! %s is not in the PhoneBook\n", name);
    }


    
}

