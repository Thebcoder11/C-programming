#include<stdio.h>
int main(){
    FILE *ptr = fopen("Bhavya.txt","r");
    char ch[100];
    while(fgets(ch,100,ptr)!=NULL){
        printf("%s",ch);
    }
    return 0;
}
// while will print 2 line 
// if will print 1 line
// read (sd -> computer )270mbps high speed read
// write(computer ->sdcard) 70 mbpd low speed