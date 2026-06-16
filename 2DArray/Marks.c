#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows/Subject : ");
    scanf("%d",&r);
    int c;
    printf("Enter number of columns/Students : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        printf("Enter the marks of %d subject : ",i+1);
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The marks martix of students is \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}