#include <stdio.h>
#include <stdlib.h>

// Ex 1
void print_infos()
{
    char name[100];
    char dob[100];
    char num[100];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your date of birth: ");
    scanf("%s", dob);
    printf("Enter yout mobile: ");
    scanf("%s", num);

    puts("---------------");

    printf("Name     : %s\n", name);
    printf("DOB      : %s\n", dob);
    printf("Mobile   : %s\n", num);
}

int main()
{
    // print_infos();
    
    return 0;
}