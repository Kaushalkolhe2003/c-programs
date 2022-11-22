#include<stdio.h>
int main(){
    float tax, income;
    printf("Enter your income for tax calculation:\n");
    scanf("%f",&income);
    if (income>=250000 && income<=500000)
     tax=tax+0.05*(income-250000);
    if(income>=500000 && income<=100000)
     tax=tax+0.20*(income-500000);
     printf("your tax is %f\n",tax);
     return 0;
}