#include<stdio.h>
int main(){
 int count=0;
 int n;
 printf("Enter the value of number : ");
 scanf("%d",&n);
 while(n!=0){
 n=n/10;
 count++;}
 printf("Number of digits of a given number are :=  %d",count);

    return 0;
} 
