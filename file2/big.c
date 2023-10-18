#include<stdio.h>

int main()
{
    int a, b, big;
    printf("Enter any two number: ");
    scanf("%d%d", &a, &b);
    if(a>b)
        big=a;
    else
        big=b;
    printf("Biggest of the two number is: %d\n", big);
    
    return 0;
}
