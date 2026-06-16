#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    printf("Enter the string : ");
    scanf("%[^\n]s",ch);
    int k=0;
    int count =0;
    while(ch[k]!='\0'){
        count++;
        k++;
    }
    for(int i=0,j=count-1;i<j;i++,j--){
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
    }
    printf("%s",ch);
    return 0;
}