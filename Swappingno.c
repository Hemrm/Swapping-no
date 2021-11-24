#include<stdio.h>
void main()
{
     int a,b;
     printf(" Enter two value to swap\n");
     scanf("%d%d",&a,&b);
     printf("Before swapping a = %d and b = %d \n",a,b);
     
     a=a+b;
     b=a-b;
     a=a-b;

     printf("after swapping a = %d and b = %d \n",a,b);
}
