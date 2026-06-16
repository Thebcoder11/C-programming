#include<stdio.h>
void Reverse(int arr[] ,int si,int ei){
    int temp;
    for(int i=si,j=ei;i<j;i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main(){
    int size;
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
    int k;
    printf("Enter the value of k : ");
    scanf("%d",&k);
    k = k % size;
    Reverse(arr,0,size-1);
    Reverse(arr,0,k-1);
    Reverse(arr,k,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}