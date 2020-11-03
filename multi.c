#include <stdio.h>

float multiply(float var1,float var2){

    return var1*var2;
}



float main(){
float tableof = 2.5;
float result;
result = multiply(tableof,1);
printf("2.5 * 1 = %f\n",multiply(tableof,1));
printf("2.5 * 2 = %f\n",multiply(tableof,2));
printf("2.5 * 3 = %f\n",multiply(tableof,3));
printf("2 5.* 4 = %f\n",multiply(tableof,4));
printf("2.5 * 5 = %f\n",multiply(tableof,5));
printf("2.5 * 6 = %f\n",multiply(tableof,6));
printf("2.5* 7 = %f\n",multiply(tableof,7));
printf("2.5 * 8 = %f\n",multiply(tableof,8));
printf("2.5 * 9 = %f\n",multiply(tableof,9));
printf("2.5 * 10 = %f\n",multiply(tableof,10));
return 0;

}


