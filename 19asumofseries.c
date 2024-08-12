#include<stdio.h>
int main(){
int n;
    printf("Enter the value of number : ");
    scanf("%d",&n);
    int sum1 =0;
    for(int i=1;i<=n;i=i+2){
     sum1=sum1+i;
     
    }
    int sum2=0;
    for(int j=-2;j>=-n;j=j-2){
    sum2=sum2+j;
    } int s=sum1+sum2;
    printf("Sum of required series is :=%d ",s);

    return 0;
}//another method is in next file