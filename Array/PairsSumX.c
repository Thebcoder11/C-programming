#include<stdio.h>
int main(){
    int size , count=0;
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
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==x){
                printf("(%d,%d)\n",arr[i],arr[j]);
                count++;
            }
        }
    }
    printf("The total number of the given pairs whose sum is equal to %d are : %d",x,count);
    if(count == 0){
        printf("No pair found in the given array ");
    }
    return 0;
}