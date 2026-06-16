#include<stdio.h>
int main(){
    float area,perimeter,length,breadth;
    printf("Enter Length : ");
    scanf("%f",&length);
    printf("Enter Breadth : ");
    scanf("%f",&breadth);
    area = length * breadth;
    perimeter = 2 *(length + breadth);
    if(area>perimeter){
        printf("Area is greater than Perimeter");
    }
    else if(perimeter>area){
        printf("Perimeter is greater than Area");
    }
    else{
        printf("Area and Perimeter are equal");
    }
    return 0;
}