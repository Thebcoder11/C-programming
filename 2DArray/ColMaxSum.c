#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter the number of columns : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at(%d,%d) index : ",i,j);
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
    int jdx = -1;
    int maxcs = 0;
    for(int j=0;j<c;j++){
        int colsum = 0;
        for(int i=0;i<r;i++){
            colsum = colsum + arr[i][j];
        }
        if(maxcs<colsum){
            maxcs = colsum;
            jdx = j;
        }
    }
    printf("The maximum column sum is %d and the index of the column is: %d",maxcs,jdx);
    return 0;
}