#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=1;i<n;i++){
        arr[i] = i;
        sum = sum+arr[i];
    }
    int totalsum = (n*(n+1))/2;
    int missvalue = totalsum - sum;
    printf("The missing value in the array is : %d",missvalue);
    return 0;
}