#include<stdio.h>
#include<stdlib.h>

void multiply (int a, int b, int c)
{
int multiply = a * b * c;
printf("the value = %d \n",multiply);
}


int main()
{
    int x;
    int y;
    int z;
    printf("Please enter the three number\n");
    printf("Please enter the first number\n");
    scanf("%d",&x);
     printf("Please enter the second number\n");
    scanf("%d",&y);
     printf("Please enter the third number\n");
    scanf("%d",&z);
    multiply (x,y,z);
}