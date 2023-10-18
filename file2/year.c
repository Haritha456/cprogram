#include<stdio.h>

int main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    if((year%4==0) && (year%100!=0))
        printf("It's a Leap Year\n");
    else if(year%400==0)
        printf("It's a Leap Year\n");
    else
        printf("It's not a Leap Year\n");
    
    return 0;
}
