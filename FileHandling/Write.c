#include<stdio.h>
int main(){
    FILE *ptr = fopen("Aaryash.txt","w");
    char ch[50]="He is my brother and he is my life";
    fputs(ch,ptr);
    FILE *p = fopen("Rahul.txt","r");
    char str[50];
    while(fgets(str,50,p)!=NULL){
        printf("%s",str);
    }
    return 0;
}