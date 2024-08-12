#include<stdio.h>
int main(){
  int n;
  printf("Enter the value of n :");
  scanf("%d",&n);
  int a=1,b=1,sum;
  printf("The 1st fibonnaci number is : %d\n",a);
  printf("The 2nd fibonnaci number is : %d\n",a);
  int i=3;
 
  while ( i<=n) {
    sum=a+b;
    a=b;
    b=sum;
    printf("The %d th fibonnaci number is : %d\n",i,sum);
    i=i+1;

  }
  return 0;
}