#include<stdio.h>
void zigzag(int n){
    if(n==0) return;
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
    return;
}
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        zigzag(i);
        printf("\n");
    }
    return 0;
}