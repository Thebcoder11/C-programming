#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int idx = 0;
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the element at %d index : ",i);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
        if(max<arr[i]){
            max = arr[i];
            idx = i;
        }
    }
    printf("\nThe maximum elements in the given array is : %d",max);
    printf("\nThe index of the maximum element is : %d ",idx);

    return 0;
}