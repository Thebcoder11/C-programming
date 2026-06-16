#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates of x and y : ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("Point lies on Origin");
    }
    else if(x==0){
        printf("Point lies on Y-axis");
    }
    else if(y==0){
        printf("Point lies on X-axis");
    }
    else{
        printf("Point lies somewhere in between not on any axis"); 
    }
    return 0;
}