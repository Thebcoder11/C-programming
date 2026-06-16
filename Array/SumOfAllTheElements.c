#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the Element at %d index : ",i);
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
        sum = sum + arr[i];
    }
    printf("\nThe sum of the given array is : %d",sum);
    return 0;
}