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
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int brr[size];
    for(int i=0;i<size;i++){
        brr[i]= arr[size-1-i];
    }
    for(int i=0;i<size;i++){
        printf("%d ",brr[i]);
    }

    return 0;
}