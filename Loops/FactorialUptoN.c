#include<stdio.h>
int main(){
    int n,fac=1;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fac = fac * i;
        printf("The factorial of %d is : %d\n",i,fac);
    }
    return 0;
}