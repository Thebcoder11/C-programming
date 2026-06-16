#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int downways = 0;
    int rightways = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        rightways = rightways + maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downways = downways + maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways = rightways + maze(cr,cc+1,er,ec);
        downways = downways + maze(cr+1,cc,er,ec);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int x = maze(1,1,n,m);
    printf("The total number of ways : %d",x);
    return 0;
}