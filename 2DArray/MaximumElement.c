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
    int idx = -1;
    int jdx = -1;
    int max = INT_MIN;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
            if(max<arr[i][j]){
                max = arr[i][j];
                idx = i;
                jdx = j;
            }
        }
        printf("\n");
    }
    printf("The maximum element is %d and its index is (%d,%d)",max,idx,jdx);
    return 0;
}