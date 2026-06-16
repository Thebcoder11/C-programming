#include<stdio.h>
int main(){
    int n,a,b,s,i;
    printf("Enter number : ");
    scanf("%d",&n);
    a = 1;
    b = 0;
    for(i=1;i<=n;i++){
        s = a+b;
        a = b;
        b = s;
    }
    printf("The fibonacci of %d is : %d ",n,s);


    return 0;
}