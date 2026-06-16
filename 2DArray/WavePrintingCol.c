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
    printf("The Input Matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The Wave printing\n");
    for(int i=0;i<c;i++){
        if(i%2==0){
            for(int j=r-1;j>=0;j--){
                printf("%d ",arr[j][i]);
            }
        }
        else{
            for(int j=0;j<r;j++){
                printf("%d ",arr[j][i]);
            }
        }
        printf("\n");
    }
    return 0;
}