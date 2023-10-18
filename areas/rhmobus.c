#include <stdio.h>

int main()
{
   float diagonal1,diagonal2,area;
   printf("enter the value of diagonal1,diagonal2:");
   scanf("%f%f",&diagonal1,&diagonal2);
   area=0.5*diagonal1*diagonal2;
   printf("area of rhmobus is :%.2f\n",area);
   return 0;
}

