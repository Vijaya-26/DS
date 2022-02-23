//STACKS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE];
int top=-1;
int push(int value){
 if(top==SIZE-1){
 printf("stack is full");
 }
 else{
 top++;
 stack[top]=value;
 printf("insertion success");
 }
}

int pop(){
 if(top==-1){
 printf("stack is empty");
 }
 else{
 printf("deleted: %d",stack[top]);
 top--;
 }
}

int display(){
 if(top==-1){
  printf("stack is empty");
 }
 else{
  int i;
  printf("stack elements are: \n");
  for(i=top;i>=0;i--)
  printf("%d\n",stack[i]);
 }
}
int main()
{
 int value, choice;
 do{
  printf("-----OPTIONS-----\n");
  printf("1.push\n2. pop\n3. display\n4. exit\n");
  printf("enter your choice :");
  scanf("%d", &choice);
  switch(choice){
   case 1 : printf("enter the element to be inserted : ");
	       scanf("%d",&value);
	       push(value);
	       break;
   case 2 : pop();
	       break;
   case 3 : display();
	       break;
   case 4 : exit(0);
   default : printf("wrong choice");
  }
 } 
  while(choice!=4);
  return 0;

}