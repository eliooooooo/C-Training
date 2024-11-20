#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

// Ex 5
void compute_rectangle(int height, int width)
{
    float area = height*width;
    float perimeter = (height+width)*2;

    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    printf("Area of the rectangle: %.2f\n", area);
}

// Ex 6
void compute_circle(int radius)
{
    float perimeter = (2*radius)*M_PI;
    float area = (radius*radius)*M_PI;

    printf("Perimeter of the circle: %.2f\n", perimeter);
    printf("Area of the circle: %.2f\n", area);
}

// Ex 8
void days_converter(int days)
{
    int years = days/365;
    int day_left = days%365;
    int weeks = day_left/7;
    day_left = day_left%7;
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days : %d\n", day_left);
}

int main()
{
    // print_infos();
    // check_version();
    // compute_rectangle(5, 3);
    // compute_circle(5);
    days_converter(1329);
    return 0;
}