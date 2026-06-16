#include<stdio.h>
int main(){
    char ch[] ={'H','e','l','l','o'}; // size = 5
    int j=0;
    while(ch[j]!=0){
        printf("%c",ch[j]);
        j++;
    }
    printf("\n");
    char c[] = "I am learning C programming" ; // 27+1(\0) = 28 
    int i = 0;
    while(c[i]!='\0'){
        printf("%c",c[i]);
        i++;
    }
    return 0;
}
// but in ch variable initialization it does not get automatically added in it
//in c variable string which is input an null character is automatically get added in the end