#include<stdio.h>
int main(){
    int a = 30*1000 +2768;
    printf("%d",a);
    return 0;
}
// 32768 
// if data type is short then output will be -32768
// short = 2 byte = 16 bits 2power16 = 65536 numbers can be stored
// range of short -2power15 to 2power15 -1 => -32768 to 32767

// int = 4byte = 32bits 2power32 number can be stored
// range -2power31 to 2power31-1

// char range = 1byte = 8bits = 2power8 number can be stored = 256number can be stored
// 1000b = 1Kb 
// 1000KB = 1MB
// 1000MB = 1GB
// 1000GB = 1TB