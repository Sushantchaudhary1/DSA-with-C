#include<stdio.h>
int fibo(int range){

 int a=0,b=1,c;
 while(a<range){
  printf("%d\t",a);
  c=a+b;
  a=b;
  b=c;
 }
 return c;
 }
 int main(){
 int range;

 printf("Enter the range:");
 scanf("%d",&range);
 printf("The fibonacci series is :\n");
 fibo(range);
 getch();
}