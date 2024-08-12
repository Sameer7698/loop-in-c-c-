#include<stdio.h>
void main(){
    int n;
   printf("Enter the value of n :");
   scanf("%d",&n);
   for(int j=1;j<=n;j++){
   int a;if(j>1) a=0;
   for(int i=2;i<j;i++){
    if(j%i==0) a=1;
   }
   if(a ==0) printf("The given no. %d is prime \n ",j);
   else if (a==1) printf("The given no. %d is composite \n",j);
   else if(j==1 || j<=1) printf("The given number %d is neither prime nor composite\n ",j);}
   

}
