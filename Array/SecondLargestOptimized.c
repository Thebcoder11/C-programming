#include<stdio.h>
#include<limits.h>
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
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            smax = max;
            max = arr[i];
        }
        else{
            if(smax<arr[i] && max!=arr[i]){
                smax = arr[i];
            }
        }
    }
    printf("%d %d",max,smax);
    return 0;
}