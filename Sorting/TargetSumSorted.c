#include<stdio.h>
int main(){
    int n;
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
    int target;
    printf("Enter the target sum : ");
    scanf("%d",&target); 
    int s = 0;
    int e = n-1;
    while(s<e){
        if(arr[s]+arr[e]==target){
            printf("Found the target sum \n");
            printf("The elements are : %d and %d \n",arr[s],arr[e]);
            break;
        }
        else if(arr[s]+arr[e]>target){
            e--;
        }
        else{
            s++;
        }
    }
    return 0;
}