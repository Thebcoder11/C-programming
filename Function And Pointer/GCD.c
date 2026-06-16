#include<stdio.h>
int min(int a, int b){
    int minimum = a;
    if(b<a) minimum = b;
    return minimum;
}
int main(){
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    int gcd;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    printf("The Greatest common divisor of the number is : %d",gcd);
    return 0;
}