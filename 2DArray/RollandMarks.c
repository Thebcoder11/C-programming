#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of students/rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns/student details : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        printf("Enter the details of %d student : ",i+1);
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The student matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}