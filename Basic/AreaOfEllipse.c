#include<stdio.h>
int main(){
    float a,b,pi,area;
    pi = 3.1415;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    area = pi*a*b;
    printf("The area of the ellipse is : %f",area);
    return 0;
}
// scanf is used for input
// printf is used for output
// & -> it is used for addressing
// it tell put the value on the address of the a