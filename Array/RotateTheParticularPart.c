#include<stdio.h>
void rotate(int arr[],int si,int ei){
    int temp;
    for(int i=si,j=ei;i<j;i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
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
    printf("Array before Rotating\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int a,b;
    printf("Enter the starting and ending value of rotating index : ");
    scanf("%d %d",&a,&b);
    rotate(arr,a,b);
    printf("Array after rotating\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}