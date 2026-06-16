#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    while(n>0){
        int ld = n%10;
        if(ld % 2==0){
            sum = sum + ld;
        }
        n=n/10;
    }
    printf("The sum of even digit is : %d",sum);
    return 0;
}