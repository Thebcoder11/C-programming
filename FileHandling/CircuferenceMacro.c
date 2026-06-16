#include<stdio.h>
#define PI 3.14159265359
#define CIRCUMFERENCE(r) (2*PI*r)
int main(){
    float r;
    printf("Enter the value of radius : ");
    scanf("%f",&r);
    printf("The value of the circumference is : %f",CIRCUMFERENCE(r));
    return 0;
}