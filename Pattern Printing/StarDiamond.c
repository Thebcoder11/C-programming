#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int nst = 1;
    int nsp = n-1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<n){
            nst+=2;
            nsp--;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}