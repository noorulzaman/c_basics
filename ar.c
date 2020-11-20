#include<stdio.h>
#include<stdlib.h>
int main(){

int mar[5] = {53,98,66,42,100};
//53,98,66,42,100
// i, j
// i, -,j
// i, -,-,j          !!!! Swap
//42,98,66,53,100
// i,-,-,-,j

//42,66,98,53,100
//42,53,98,66,100
//42,53,66,98,100
int j;
for (int i = 0; i < 5; i++) // i = 2
{ 
   for (j = i+1; j < 5; j++) // j = i+1 j=3
   {
     if(mar[i] > mar[j]){ // i = 2 and mar[i] = 98 mar[j] = 66

         int temp = mar[i];
         mar[i] =  mar[j];
         mar[j]= temp;
      }
   }
   
  

  
}



// printing out the values

for (int i = 0; i < 5; i++)
{
 printf("value[%d] = %d\n",i,mar[i] );
 
 }

}


