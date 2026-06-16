#include<stdio.h>
int main(){
    int size;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=1;i<=size;i++){
        printf("Enter the element at %d index : ",i);
        scanf("%d",&arr[i]);
    }
    int product =1;
    for(int i=1;i<=size;i++){
        product = product * i;
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The product of the given array is : %d",product);
    return 0;
}