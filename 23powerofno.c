/*Ques> Two no. are entered through the keyboard .
Write a program to find the value of one no. raised to the power of another.*/
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the base  a and power b : ");
    scanf("%d,%d",&a,&b);
    int product=1;
    for(int i=1;i<=b;i++){
        
        product=product*a;
    }
    printf("The value of  base %d  raised to the power of %d is : %d",a,b,product);
    }