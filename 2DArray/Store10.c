#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows/columns : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=10;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}