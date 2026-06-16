#include<stdio.h>
int main(){
    // 1,3,5 ... upto n terms
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a = 1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a+2;
    }

    return 0;
}