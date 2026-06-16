#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of column : ");
    scanf("%d",&c);
    int arr[r][c];
    int tne = r*c;
    int count = 0;
    int minr = 0;
    int maxr = r-1;
    int minc = 0;
    int maxc = c-1;
    while(count <tne){
        for(int j=minc;j<=maxc && count <tne;j++){
            printf("Enter the element at (%d,%d) index : ",minr,j);
            scanf("%d",&arr[minr][j]);
            count ++;
        }
        minr++;
        for(int i=minr;i<=maxr && count <tne ;i++){
            printf("Enter the element at (%d,%d) index : ",i,maxc);
            scanf("%d",&arr[i][maxc]);
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc && count <tne;j--){
            printf("Enter the element at (%d,%d) index : ",maxr,j);
            scanf("%d",&arr[maxr][j]);
            count ++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<tne;i--){
            printf("Enter the element at (%d,%d) index : ",i,minc);
            scanf("%d",&arr[i][minc]);
            count++;
        }
        minc ++;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}