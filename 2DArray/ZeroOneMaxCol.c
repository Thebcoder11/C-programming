#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of columns : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter only 0 and 1s\n");
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
    int jdx = -1;
    int maxcs = INT_MIN;
    for(int j=0;j<c;j++){
        int maxc = 0;
        for(int i=0;i<r;i++){
            maxc = maxc + arr[i][j];
        }
        if(maxcs<maxc){
            maxcs = maxc;
            jdx =j;
        }
    }
    printf("The maximum column sum is : %d",maxcs);
    printf("\nThe maximum column index is : %d",jdx);

    return 0;
}