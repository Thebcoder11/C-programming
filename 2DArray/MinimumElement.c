#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    printf("Enter number of rows : ");
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
    printf("The Input Matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int min = INT_MAX;
    int idx = -1;
    int jdx = -1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(min>arr[i][j]){
                min = arr[i][j];
                idx = i;
                jdx = j;
            }
        }
    }
    printf("The minimum element in the array is %d and its index is (%d,%d)",min,idx,jdx);
    return 0;
}