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
    printf("Unsorted Array \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++){
        int min = arr[i];
        int idx = i;
        int k = i+1;
        while(k<n){
            if(min>arr[k]){
                min = arr[k];
                idx = k;
            }
            k++;
        }
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx]= temp;
    }
    printf("Sorted Array \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}