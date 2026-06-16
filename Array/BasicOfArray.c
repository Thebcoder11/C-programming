// array is used to store to collection of same datatype 
// indexing of an array start from 0 and end at n-1
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n]; // array declaration
    for(int i=0;i<n;i++){
        printf("Enter the element at %d index : ",i);
        scanf("%d",&arr[i]);
    }
    arr[n-1] = 1000; // accessing the particluar element of an array
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}