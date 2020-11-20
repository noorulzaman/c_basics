#include <stdio.h>
#include <stdlib.h>

int arraysum(int arr[], int size){
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }
  return sum;
}

int main(){
   int arr1[6] = {12,23,45,76,98,12};
   int some_of_arr = arraysum( arr1,6);
   printf("the value of array = %d\n",some_of_arr);


}