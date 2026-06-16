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
    for(int i=1;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=1;i<size;i++){
        if((smax<arr[i]) && (arr[i]!=max)){
            smax = arr[i]; 
        }
    }
    printf("%d\n",max);
    printf("The second maximum element in the array : %d",smax);
    return 0;
}