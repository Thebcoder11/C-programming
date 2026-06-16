#include<stdio.h>
void toi (int n,char s,char h,char d){
    if(n==0) return;
    toi(n-1,s,d,h);
    printf("%c -> %c\n",s,d);
    toi(n-1,h,s,d);

}
int main(){
    int n;
    printf("Enter number of rods : ");
    scanf("%d",&n);
    toi(n,'A','B','C');
    return 0;
}