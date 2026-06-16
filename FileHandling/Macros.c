#include<stdio.h>
#define PI 3.14159265359
#define AREA(r) (PI*r*r)
int main(){
    float r;
    printf("Enter the value of radius : ");
    scanf("%f",&r);
    printf("The area of the circle is :%f",AREA(r));
    return 0;
}
// and these macros are the glob al variable 
// can be accessed from anywhere
// define pi value can never be changed
// in define no need of equals to and no need of semi colon
// any in define no need to specify the data type