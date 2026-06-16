// in array continuous memory is allocated to all the elements
// and with gap of 4 bytes
// 1mb = 1000kb
// 1gb = 1000mb
// 1 byte = 8 bits
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d index : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",&arr[i]);
    }
    return 0;
}