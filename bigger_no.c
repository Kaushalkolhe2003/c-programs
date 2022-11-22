#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter the value of a:\n");
    scanf("%f",&a);
     printf("Enter the value of b:\n");
    scanf("%f",&b);
     printf("Enter the value of c:\n");
    scanf("%f",&c);
     printf("Enter the value of d:\n");
    scanf("%f",&d);
 if(a>b && a>c && a>d){
 printf("Value of is greatest amongs 3\n");
 }
 else if (b>a && b>c && b>d){
 printf("value of b is greatest among 3\n");
 }
 else if (c>a && c>b &&c>d){
    printf("Value of c is greates among 3\n");}
else if (d>a && d>b && d>c){
    printf("the value of d is greatest among 3\n");
}
 return 0;

}