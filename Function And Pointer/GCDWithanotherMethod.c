#include<stdio.h>
int min(int a,int b){
    int minimum = a;
    if(b<a) minimum = b;
    return minimum;
}
int main(){
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    int gcd ;
    for(int i=min(a,b);i>0;i--){
        if(a%i==0 && b%i==0){
            gcd = i;
            printf("The Greatest Common Divisor of two number is : %d ",gcd);
            break;
        }
    }
    return 0;
}