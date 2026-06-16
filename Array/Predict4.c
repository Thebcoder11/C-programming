#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){ // add int 
        scanf("%d",&arr[i]); // add ampercent sign
        printf("%d\n",arr[i]);
    }

    return 0;
}