#include<stdio.h>
int main(){
    int n;
    int target;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d index : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the value of target : ");
    scanf("%d",&target);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
                printf("Found the target sum\n");
                printf("The elements are :  %d and %d \n",arr[i],arr[j]);
                break;
            }
        }
    }
    return 0;
}