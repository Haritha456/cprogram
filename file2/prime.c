#include<stdio.h>
int main()
{
    int num, i, count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("It's a prime number\n");
    else
        printf("It's not a prime number\n");
    
    return 0;
}
