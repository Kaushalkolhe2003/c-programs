#include<stdio.h>
int main(){
    int row,i,j, n=1;
    printf("Enter the number of row");
    scanf("%d",&row);
     for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d\t",n);
            n++;
        }
        printf("\n");
     }
}