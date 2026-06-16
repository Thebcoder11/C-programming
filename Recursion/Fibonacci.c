#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1)+ fibo(n-2);
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int f = fibo(n);
    printf("The fibonacci is %d is : %d",n,f);
    return 0;
}