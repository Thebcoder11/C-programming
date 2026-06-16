#include<stdio.h>
int main(){
    char ch[] = "Hello World\n";
    int i=0;
    while(ch[i]!='\0'){
        printf("%c",i[ch]);
        i++;
    }
    printf("\n");
    int j=0;
    while(ch[j]!='\0'){
        printf("%c",*(j+ch));
        j++;
    }
    return 0;
}
// i[str]
// str[i]
// *(i+str)
// *(str+i)