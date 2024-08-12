#include<stdio.h>
int main(){
    int n;
    printf("Enter the given number := ");
    scanf("%d",&n);
    int r=0;
    while(n!=0){
       int  ld =n%10;
        r=10*r + ld;
       n=n/10;
    } printf("The reverse of given number is := %d",r);
    return 0;
}