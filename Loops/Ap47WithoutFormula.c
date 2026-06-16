#include<stdio.h>
int main(){
    // 4,7,10 upto n terms 
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int a = 4;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a+3;
    }
    return 0;
}