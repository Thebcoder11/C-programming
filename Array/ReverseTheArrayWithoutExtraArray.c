#include<stdio.h>
void reverse(int arr[],int si,int ei){
    int temp;
    for(int i=si,j=ei;i<j;i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
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
    reverse(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}