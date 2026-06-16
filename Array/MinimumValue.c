#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the element at %d index : ",i);
        scanf("%d",&arr[i]);
    }
    int idx = 0;
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
            idx = i;
        }
        printf("%d ",arr[i]);
    }
    printf("\nThe index of the minimum element is :%d",idx);
    printf("\nThe minimum element in the given array is : %d",min);
    return 0;
}