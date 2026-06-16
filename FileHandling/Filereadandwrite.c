#include<stdio.h>
int main(){
    FILE *ptr = fopen("Rahul.txt","r");
    char ch[100];
    while(fgets(ch,100,ptr)!=NULL){
        printf("%s",ch);
    }
    FILE *p = fopen("Nisha.txt","w");
    char c[50] = "Hello Everyone";
    fputs(c,p);
    return 0;
}
// fgets for reading
// fputs for writing