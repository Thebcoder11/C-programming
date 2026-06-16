#include<stdio.h>
int main(){
    char ch[15];
    printf("Enter the string : ");
    scanf("%[^\n]s",&ch);
    int i = 0;
    int count = 0;
    while(ch[i]!='\0'){
        count++;
        i++;
    }
    char c[count];
    for(int i=0;i<count;i++){
        c[i]=ch[i];
    }
    printf("%s\n",ch);
    printf("%s\n",c);

    ch[0]='a';
    printf("%s\n",ch);
    printf("%s\n",c);
}