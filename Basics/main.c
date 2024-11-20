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

// Ex 2
void check_version()
{
    if (__STDC_VERSION__ == 199901L)
    {
        printf("You are using the C99 version\n");
    } else if ( __STDC_VERSION__ == 201112L )
    {
        printf("You are using the C11 version\n");
    } else 
    {
        printf("You are using the C90 version\n");
    }
}

int main()
{
    // print_infos();
    // check_version();
    return 0;
}