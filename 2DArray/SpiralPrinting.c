#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter total number of columns : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at (%d,%d) index ",i,j);
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
    int tne = r*c;
    int count = 0;
    int minr = 0;
    int minc = 0;
    int maxr = r-1;
    int maxc = c-1;
    printf("The Spiral printing \n");
    while(count<tne){
        for(int j=minc; j<=maxc && count < tne ;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr && count <tne ;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc && count<tne;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<tne;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc ++;
    }
    return 0;

}