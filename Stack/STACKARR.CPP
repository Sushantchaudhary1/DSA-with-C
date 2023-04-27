#include<stdio.h>
#include<conio.h>



int stack[100];
int i,j;
int choice=0;
int n;
int top=-1;
void push();
void pop();
void show();
int peek();


void main(){
 printf("Enter the number of elements in the stack");
 scanf("%d",&n);

 printf("********Stack operations using array*******");
 while(choice != 5)
 {
 printf("Choose one from the below options...\n");
 printf("\n1.Push\n2.Pop\n3.Show\n4.Peek\n5.exit");
 printf("\nEnter Your Choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 push();
 break;

 case 2:
 pop();
 break;

 case 3:
 show();
 break;
  case 4:
  peek();
  break;

 case 5:
 {
 printf("Existing....");
 break;
 }
 }
 }
 }
 void push()
  {
  int val;
  if(top==n)
  printf("\nOverflow");
  else{
   printf("Enter the value");
   scanf("%d",&val);
   top=top+1;
   stack[top]=val;
  }
 }
 void pop(){
  if(top==1)
  printf("Underflow");
  else
  top=top-1;
 }
 void show() {
  for(i=top;i>=0;i--)
  {
   printf("%d\n", stack[i]);
  }
  if(top==-1)
  {
   printf("Stack is empty");
  }
 }

 int peek()
 {
 if(top== -1)
 {
 printf("Underflow");
 return 0;
 }
 else{
  return stack[top];
 }
 }




