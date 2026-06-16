#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("The sum of the given number is : %d",sum);
    return 0;
}