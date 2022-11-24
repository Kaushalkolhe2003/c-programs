#include<stdio.h>
int main(){
    int n, result=0,q,rem;
    printf("Please enter the number:\n");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rem =q%10;
        result=result*10 +rem;
        q=q/10;
    }
    if(result==n){
        printf("It is palindrome.\n");
    }
    else{
        printf("No! it's not palindrome");
    }
    return 0;
}
