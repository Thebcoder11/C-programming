#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d index : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Before Sorting \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int idx=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            brr[idx] = arr[i];
            idx++;
        }
    }
    while(idx<n){
        brr[idx]=0;
        idx++;
    }
    printf("After Sorting \n");
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}