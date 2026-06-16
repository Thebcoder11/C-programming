#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    n%2==0 ? printf("Even number"): printf("odd number");
    return 0;
}