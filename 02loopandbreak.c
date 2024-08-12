#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=(n-1);i=i+1){
        if( n%i==0)
           { a=1;
      break ;}}
         if (n==1){ printf("%d is neither prime nor composite : ",n);}
       else  if(a==1) {printf("%d is a composite number :",n);}
        else {printf(" %d is prime number : ",n);}
    
    
} 

