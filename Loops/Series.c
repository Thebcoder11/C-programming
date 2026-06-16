#include<stdio.h>
int main(){
    // (1-2)+(3-4)+(5-6)+7...upto n terms
    // odd = 7
    // -n/2 +n
    int n,sum=0;
    printf("Enter number : ");
    scanf("%d",&n);
    if(n%2==0){
        sum = sum + -n/2;
    }
    else{
        sum = sum + -n/2 +n;
    }

    printf("The sum of the given series is : %d",sum);
    return 0;
}