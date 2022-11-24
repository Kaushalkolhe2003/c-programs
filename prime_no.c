#include<stdio.h>
int main(){
    int n;
    int i;
    int f=0;
    printf("Enter the number: \n");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            f=1;
            break;}
    }
    if(f==1)
    {
        printf("Given number is not prime");
    }
    else{
            printf("Given number is prime number");

         }
    return 0;
}
