#include<stdio.h>
int stair(int n){
    if(n==1 || n==2) return n;
    return stair(n-1)+stair(n-2);
}
int main(){
    int n;
    printf("Enter number of Stairs : ");
    scanf("%d",&n);
    int s = stair(n);
    printf("The number of ways to climb that stairs : %d",s);
    return 0;
}