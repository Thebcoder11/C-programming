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
    int a=0;
    int value = 0;
    while(a<n){
        value = value * 10;
        value = value + arr[a];
        a++;
    }
    printf("First value : %d ", value);
    printf("\n");
    for(int i=0;i<n;i++){
        if(arr[n-1]!=arr[n-2]){
            int temp = arr[n-2];
            arr[n-2] = arr[n-1];
            arr[n-1] = temp;
        }
        else if(arr[n-2]!=arr[n-3]){
            int temp = arr[n-3];
            arr[n-3] = arr[n-2];
            arr[n-2] = temp;
        }
        else{
            int temp = arr[n-4];
            arr[n-4] = arr[n-3];
            arr[n-3] = temp;
        }
    }
    int secondvalue = 0;
    int b = 0;
    while(b<n){
        secondvalue *=10;
        secondvalue = secondvalue + arr[b];
        b++;
    }
    printf("Second Value : %d \n",secondvalue);
    int sum = value+secondvalue;
    printf("The minimum sum is : %d",sum);
    return 0;
}