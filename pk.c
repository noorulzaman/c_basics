#include<stdio.h>
#include<stdlib.h>
int main(){
int apr[10] = {98,23,67,58,11,63,19,32,78};

for (int i = 0; i < 10; i++)
{
for (int j = i+1; j < 10; j++)
{
    if (apr[i] > apr[j])
    {
       int temp = apr[i];
         apr[i] = apr[j];
         apr[j] = temp ;

    }  
}

}
for (int i = 0; i < 10; i++)

{
    printf("the array [%d] %d\n " ,i,apr[i]);
}

}











