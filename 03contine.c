#include<stdio.h>
int main(){ 
    for(int j=1;j<=100;j++){
        if(j%2!=0){
            continue;}
            printf("%d   ",j);
           }
    return 0;
}