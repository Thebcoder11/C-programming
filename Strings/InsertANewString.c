#include<stdio.h>
int main(){
    char c1[15];
    printf("Enter the string : ");
    scanf("%[^\n]s",c1);
    int i=0;
    int count =0;
    while(c1[i]!='\0'){
        count++;
        i++;
    }
    int x ;
    printf("Enter the index you want to add the string : ");
    scanf("%d",&x);
    for(int j=count;j>=x;j--){
        c1[j+1] = c1[j];
    }
    c1[x] = 'r';
    printf("%s",c1);
    return 0;
}
