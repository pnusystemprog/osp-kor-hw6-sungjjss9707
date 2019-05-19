#include<stdio.h>
#include "phone.h"
void registerPhoneData()
{
    printf("New User Name : ");
    scanf("%s", &PhoneBook[size].Name);
    printf("PhoneNumber : ");
    scanf("%s", &PhoneBook[size].PhoneNumber);
    printf("Registered...\n");
    //printf("%s  %s\n", PhoneBook[size].Name, PhoneBook[size].PhoneNumber);
    size=size+1;
}
