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
    printf("the input matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int j=0;j<c;j++){
        int columnsum = 0;
        for(int i=0;i<r;i++){
            columnsum = columnsum + arr[i][j];
        }
        printf("%d column sum is :%d\n",j,columnsum);
    }
    return 0;
}