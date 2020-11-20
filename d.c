#include <stdio.h>
#include <string.h>


int main(){
char gender[20];
printf("Please enter your gender :");
scanf("%s",gender);
 
 
char father;
char mother;
if (!strcmp(gender,"father"))
{
    printf("the gender is mother\n");
}
if (!strcmp(gender, "mother"))
{
   printf("the gender is father\n");
}



return 0;
}
