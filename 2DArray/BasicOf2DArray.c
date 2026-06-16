#include<stdio.h>
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // every block is called cell
    // 2d array is also called matrix 
    // used to store many subject marks neatly beacuse only 1d array store only 1 subject marks
    return 0;
}