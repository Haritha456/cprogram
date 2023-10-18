#include <stdio.h>

int main()
{
   float base,height,area;
   printf("enter the value of base & height:");
   scanf("%f%f",&base,&height);
   area=0.5*base*height;
   printf("area of triangle is :%.2f\n",area);
   return 0;
}

