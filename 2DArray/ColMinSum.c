#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter the number of columns : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at (%d,%d) index : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The input array \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int jdx = -1;
    int mincs = INT_MAX;
    for(int j=0;j<c;j++){
        int colsum = 0;
        for(int i=0;i<r;i++){
            colsum = colsum + arr[i][j];
        }
        if(colsum<mincs){
            mincs = colsum;
            jdx = j;
        }
    }
    printf("The minimum column sum is : %d",mincs);
    printf("\nThe index of the minimum column is : %d",jdx);
    return 0;
}