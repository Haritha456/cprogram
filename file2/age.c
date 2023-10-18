#include<stdio.h>
int main()
{
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    if(age>=13&&age<=19)
    printf("the person is teenager.\n");
    else
    printf("the person is not teenager.\n");
    return 0;
}

