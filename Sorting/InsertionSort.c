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
    printf("Unsorted Array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=1;i<n;i++){
        int j = i-1;
        while(j>=0 && arr[j+1]<arr[j]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    printf("Sorted Array \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// insertion sort is also stable