#include<stdio.h>
int main(){
    int n;
    int i;
    printf("Enter the number: \n");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            printf("Given number is not prime");
            break;}
        else{
            printf("Given number is prime number");
            break;
         }
        
    }
    return 0;
}