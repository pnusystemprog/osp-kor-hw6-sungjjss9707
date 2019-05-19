#include<stdio.h>
#include "phone.h"
void deleteByName()
{
    int a;
    int num=100;
    char name[10];
    printf("Enter a name to delete : ");
    scanf("%s", &name);
    for(a=0; a<size; ++a){
      if(strcmp(name, PhoneBook[a].Name)==0){
        num=a;
      }
    }
    if(num!=100){
	for(a=num; a<size-1; ++a){
	  strcpy(PhoneBook[a].Name, PhoneBook[a+1].Name);
	  strcpy(PhoneBook[a].PhoneNumber, PhoneBook[a+1].PhoneNumber);
	}
	size=size-1;
        printf("%s is deleted...\n", name);
    }
    else{
        printf("Oops! %s is not in the PhoneBook\n", name);
    }

    
}


