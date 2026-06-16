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
    printf("UnSorted Array \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int k;
    printf("Enter the value of k : ");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        int min = arr[i];
        int idx = i;

        int j=i+1;
        while(j<n){
            if(min>arr[j]){
                min = arr[j];
                idx = j;
            }
            j++;
        }
        int temp = arr[i];
        arr[i] = min;
        arr[idx] = temp;
    }
    printf("The Sorted Array \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The kth smallest elemnt is : %d ",arr[k-1]);
    return 0;
}