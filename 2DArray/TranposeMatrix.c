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
            printf("Enter the element at (%d,%d) index : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The input matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose \n");
    int brr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j] = arr[j][i];
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}