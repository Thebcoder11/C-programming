#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int j=1;j<=2*n-1;j++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<n;i++){
        for(int k=1;k<=n-i;k++){
            printf("*");
        }
        for(int l=1;l<=2*i-1;l++){
            printf(" ");
        }
        for(int m=1;m<=n-i;m++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}