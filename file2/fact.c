#include<stdio.h>

int main()
{
    int num, i, fact=1;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=num; i>0; i--)
        fact = fact*i;
    printf("Factorial of %d = %d\n", num, fact);
    
    return 0;
}

