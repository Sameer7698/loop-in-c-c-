#include<stdio.h>
int main(){
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    for(int i=1;i<=x;i=i+1){
        if(i%2!=0) printf("%d ",i);}    
    return 0;
}