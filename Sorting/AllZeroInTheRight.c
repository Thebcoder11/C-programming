#include<stdio.h>
#include<stdbool.h>
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
    bool flag;
    for(int i=0;i<n-1;i++){
        flag = true; // already sorted
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    printf("Sorted Array \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}