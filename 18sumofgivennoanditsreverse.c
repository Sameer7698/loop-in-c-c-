#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of given number := ");
    scanf("%d",&n);
    int y=n;
    int r=0;
    while(n!=0){
        int ld=n%10;
        r=r*10+ld;
        n=n/10;
    }
    int sum=(r+y);
printf("The sum of given number and its revese := %d",sum);

    return 0;
}