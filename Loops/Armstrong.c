#include<stdio.h>
int main(){
    int n,ld,count=0,arm=0;
    printf("Enter number : ");
    scanf("%d",&n);
    int a = n;
    int b = n;
    while(a>0){
        ld = n%10;
        count ++;
        a = a/10;
    }
    for(int i=1;i<=count;i++){
        ld = b%10;
        arm = arm+(ld * ld * ld);
        b = b/10;
    }
    if(n==arm){
        printf("Armstrong Number ");
    }
    else{
        printf("Not a Armstrong Number ");
    }
    return 0;
}