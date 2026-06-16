#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows of 1st matrix : ");
    scanf("%d",&r);
    printf("Enter number of columns of 1st matrix : ");
    scanf("%d",&c);
    int r2,c2;
    printf("Enter number of rows of 2nd matrix : ");
    scanf("%d",&r2);
    printf("Enter the number of columns of 2nd matrix : ");
    scanf("%d",&c2);
    int arr[r][c];
    int brr[r2][c2];
    printf("Enter the values of 1st matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at (%d,%d) index : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the value of 2nd matrix \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("Enter the element at (%d,%d) index : ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    if(c==r2){
        int res[r][c2];
        for(int i=0;i<r;i++){
            for(int j=0;j<c2;j++){
                res[i][j] = 0;
                for(int k=0;k<c;k++){
                    res[i][j] += arr[i][k] * brr[k][j];
                }
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
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                printf("%d ",brr[i][j]);
            }
            printf("\n");
        }
        printf("The resultant matrix\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c2;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("These two matrix cant be multiplied with each other ");
    }
    return 0;
}