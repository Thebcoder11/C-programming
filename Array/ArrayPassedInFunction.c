#include<stdio.h>
void fun(int arr[],int s,int e){
    arr[e-1]=500;
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
    fun(arr,0,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// when a pass an array an address of the first element got passed
// array is always passed by reference