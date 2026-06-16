#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter the number of columns : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter only 0 and 1 \n");
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
    int idx = -1;
    int maxr = INT_MIN;
    for(int i=0;i<r;i++){
        int maxrs =0;
        for(int j=0;j<c;j++){
            maxrs = maxrs +arr[i][j];
        }
        if(maxr<maxrs){
            maxr = maxrs;
            idx = i;
        }
    }
    printf("The maximum sum of the rows is : %d",maxr);
    printf("\nThe index of the maximum row is : %d",idx);
    return 0;
}