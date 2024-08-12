/*WAP to print out all armstrong  no. b/w 1 and 500. If sum of cubes of each digit of the no. is equal to the number itself,then the number is called an armstrong no.FOR EX,153=()*/
#include<stdio.h>
int main(){
int n;
printf("Enter the number n: ");
scanf("%d",&n);

for(int j=1;j<=n;j++){
    int cube=0;
while(j%10==0){
    int r= j%10;

     cube=cube + r*r*r;
    

}
if(cube==j){printf("%d is armstrong no.\n",j);}}
    return 0;
}