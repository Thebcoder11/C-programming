#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3,m1,m2;
    printf("Enter the coordinates of x1 and y1 : ");
    scanf("%f %f",&x1,&y1);
    printf("Enter the coordinates of x2 and y2 : ");
    scanf("%f %f",&x2,&y2);
    printf("Enter the coordinates of x3 and y3 : ");
    scanf("%f %f",&x3,&y3);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if(m1==m2){
        printf("It is a straight line");
    }
    else{
        printf("It is not a straight line");
    }
    return 0;
}