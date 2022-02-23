//QUEUE
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 4
int q[size],item;
int front=-1,rear=-1;
int enqueue(item){
    if(rear==size-1){
        printf("queue is full");
    }
    else{
         printf("enter value to be inserted : ");
         scanf("%d", &item);
         rear++;
         q[rear]=item;
         if(front==-1){
             front++;
        }
    }
    //return;
}
int dequeue(){
    if(front==-1 || front>rear){
        printf("queue underflow");
    }
    else{
        q[front]=item;
        printf("deleted element is : %d", &item);
        front++;
    }
    //return;
}
int display(){
    if(front==-1){
        printf("queue is empty");
        return;
    }
    else{
        int i;
        printf("queue is : \n");
        for(i=front;i<=rear;i++){
            printf("%d\n",q[i]);
        }
    }
    //return;
}
int main()
{
    int choice;
    do{
        printf("---options---\n");
        printf("1. enqueue\n 2. dequeue\n 3.display\n");
        printf("enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : enqueue();
                     break;
            case 2 : dequeue();
                     break;
            case 3 : display();
                     break;
            case 4 : exit(0);
        }    
    }
    while(choice!=4);
    return 0;
}