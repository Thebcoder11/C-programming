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
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int a = n-1;
    int actualsum = (a*(a+1))/2;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    int duplicate = sum - actualsum;
    printf("The duplicate element is : %d",duplicate);
    return 0;
}