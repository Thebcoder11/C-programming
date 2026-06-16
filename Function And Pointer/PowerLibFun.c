#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter Base : ");
    scanf("%d",&a);
    int b;
    printf("Enter Exponent : ");
    scanf("%d",&b);
    int power = pow(a,b);
    printf("When %d is raised to %d the power is : %d",a,b,power);
    return 0;
}