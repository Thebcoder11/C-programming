#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d index : ",i);
        scanf("%d",&arr[i]);
        brr[i] = 0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int idx ;
    for(int i=0;i<n;i++){
        idx = arr[i];
        if(brr[idx] == 1){
            printf("The Element has already occured \n");
            printf("The element is : %d\n",idx);
            break;
        }
        brr[idx] = 1;
    }
    return 0;
}