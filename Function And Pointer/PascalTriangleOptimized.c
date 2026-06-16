#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int first = 1;
        for(int k=0;k<=n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",first);
            first = first *(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
// ncr = n!/(r!*n-r!)
// ncr+1 = n!/(r+1)!(n-r-1)!
// ncr+1 = n!/(r+1)*r! (n-r-1)!
// (n-r)! = n-r * (n-r-1)!
// (n-r)!/n-r = (n-r-1)!
// ncr+1 = n!/(r+1)*r! (n-r)!/n-r
// ncr+1 =   n! (n-r)
//         (r+1)*r! (n-r)!
// ncr +1 = ncr (n-r)/(r+1)
// ncr+1 = ncr (i-j)/(j+1)
