#include<Stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("Number is divisible by 5 and 3");
    }
    else{
        printf("Number is not divisible by 5 and 3");
    }
    return 0;
}