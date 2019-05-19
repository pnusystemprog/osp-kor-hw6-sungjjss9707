#include<stdio.h>
#include "phone.h"
void printAll()
{
    int a;
    printf("<<Display all contacts in the PhoneBook>>\n");
    for(a=0; a<size ; ++a){
        printf("%s         %s\n", PhoneBook[a].Name, PhoneBook[a].PhoneNumber);
    }
}


