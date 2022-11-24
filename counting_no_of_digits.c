#include<stdio.h>
int main(){
    int number, q,count=0,cnt;
    printf("Enter the number:\n");
    scanf("%d",&number);
    q=number;
    while(q!=0){
        q=q/10;
        count++;
    }
       q=number;
    printf("%d",count);
    return 0;
}