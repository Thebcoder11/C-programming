#include<stdio.h>
#define AREA(l,b) (l*b)
int main(){
    float l,b;
    printf("Enter the value of length : ");
    scanf("%f",&l);
    printf("Enter the width : ");
    scanf("%f",&b);
    printf("%f",AREA(l,b));
    return 0;
}