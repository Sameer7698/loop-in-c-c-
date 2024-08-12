#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of x := ");
    scanf("%d",&n);
    int sum =0;
    while(n!=0){
       int ld =n%10;
        sum =sum + ld;
        n=n/10;
    } printf("%d",sum);
    return 0;
}