#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows for 1st and 2nd Matrix : ");
    scanf("%d",&r);
    printf("Enter the number of column for 2nd Matrix : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the Value for 1st Matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at (%d,%d) index : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[r][c];
    printf("Enter the Value for 2nd Matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at (%d,%d) index : ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    int res[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j]=arr[i][j]+brr[i][j];
        }
    }
    printf("1st Matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("2nd Matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    printf("The Resultant Matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}