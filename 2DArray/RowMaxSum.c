#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of columns : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at %d index : ",i);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int idx = -1;
    int maxrowsum = -1;
    for(int i=0;i<r;i++){
        int rowsum = 0;
        for(int j=0;j<c;j++){
            rowsum = rowsum + arr[i][j];
        }
        if(maxrowsum < rowsum){
            maxrowsum = rowsum;
            idx = i;
        }
    }
    printf("The Maximum sum of the row is %d and the row number is : %d ",maxrowsum,idx);
}