#include<stdio.h>
int main(){ int n;
    printf("Enter the value of give number := ");
    scanf("%d",&n);
    int c=1,x=1,sum=0;
    while(sum<=n){
        sum=c+x;
        c=x;
        x=sum;
        printf("%d",sum);   
    }

    return 0;
}