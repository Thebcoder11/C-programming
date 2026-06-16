#include<stdio.h>
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int s = sum(n);
    printf("The sum is : %d",s);
    return 0;
}