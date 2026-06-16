#include<stdio.h>
int main(){
    int n,sum=0,count=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    while(n>0){
        int ld = n%10;
        count++;
        sum = sum+ld;
        n=n/10;
    }
    printf("The sum of digit is : %d\n",sum);
    printf("The total number of digit is : %d ",count);
    return 0;
}