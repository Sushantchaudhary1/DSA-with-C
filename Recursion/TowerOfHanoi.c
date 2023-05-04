#include<stdio.h>
int count=0;
void towerofhanoi(int n,char from, char to, char other){
 if(n==1){
 printf("Move disk from %c to %c\n",from,to);
 return;
   }
   else{
    towerofhanoi(n-1,from,other,to);
    towerofhanoi(1,from,other,to);
    towerofhanoi(n-1,other,to ,from);

   }
   count++;

}
int main(){
 int n=9;
 towerofhanoi(n,'A','B','C');
 printf("\n The total no of steps are %d",count);
 return 0;


}