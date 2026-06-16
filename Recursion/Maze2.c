#include<stdio.h>
int maze(int n,int m){
    int downways = 0;
    int rightways = 0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightways += maze(n,m-1);
    }
    if(m==1){
        downways += maze(n-1,m);
    }
    if(n>1 && m>1){
        downways += maze(n-1,m);
        rightways += maze(n,m-1);
    }
    int totalways = rightways+downways;
    return totalways;
}
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m ;
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int x = maze(n,m);
    printf("The total number of ways : %d",x);
    return 0;
}