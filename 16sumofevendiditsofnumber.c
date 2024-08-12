#include<stdio.h>
void main(){
   long long  n;
    printf("Enter the value of given number := ");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        int ld =n%10;
         if(ld%2==0) {sum= sum +ld;
         printf("The sum of digits of given number is= %d",sum);
    } n=n/10;
} }