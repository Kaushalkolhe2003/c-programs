#include<stdio.h>
int main(){
    int  decimal=0, binary,base=1,num,rem;
    printf("Enter the Binary no.:");
    scanf("%d",&binary);
    num=binary;
    while(binary!=0){
        rem=binary%10;
        decimal=decimal+rem*base;
        base=base*2;
        binary=binary/10;
    }
    printf("Decimal Equivalent of binary no %d is %d ",num,decimal);
    return 0;
}