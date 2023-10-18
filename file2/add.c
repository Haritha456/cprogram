#include<stdio.h>

int main()
{
    int num1, num2, add;
    printf("Enter any two number: ");
    scanf("%d%d", &num1, &num2);
    add = num1+num2;
    printf("Sum of %d and %d is %d\n", num1, num2, add);

    return 0;
}
