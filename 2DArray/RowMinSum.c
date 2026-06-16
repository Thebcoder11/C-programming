#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter number of columns : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at (%d,%d) index : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The input matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int idx =-1;
    int minr = INT_MAX;
    for(int i=0;i<r;i++){
        int minrowsum = 0;
        for(int j=0;j<c;j++){
            minrowsum = minrowsum +arr[i][j];
        }
        if(minrowsum<minr){
            minr = minrowsum;
            idx = i;
        }
    }
    printf("The minimum row sum is %d and the row number is : %d",minr,idx);
    return 0;
}