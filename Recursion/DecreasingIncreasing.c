#include<stdio.h>
void decinc(int n){
    if(n==0) return;
    printf("%d\n",n);
    decinc(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    decinc(n);
    return 0;
}