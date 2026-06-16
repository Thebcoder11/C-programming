#include<stdio.h>
void decreasing(int a,int b){
    if(a>b) return;
    decreasing(a+1,b);
    printf("%d\n",a);
    return;
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    decreasing(1,n);
    return 0;
}