#include<stdio.h>
int main(){
    int size, count = 0;
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
    int x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for(int i=0;i<size;i++){
        if(x<arr[i]){
            printf("%d ",arr[i]);
            count++;
        }
    }
    printf("\nThe total number greater than x are : %d",count);
    return 0;
}