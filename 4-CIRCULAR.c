//circular queue
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 4
int q[size];
int front=-1,rear=-1;
int element;

int isfull(){
    if((front == rear+1) || (front == 0 && rear==size-1))
    return 1;
    else
    return 0;
}
int isempty(){
    if(front == -1)
    return 1;
    return 0;
}

int enqueue(element){
    if(isfull())
       printf("queue is full \n");
    else{
        if(front==-1)
        front=0;
        rear=(rear=1)%size;
        q[rear]=element;
        printf("inserted : %d\n",element);
    }  
    //return(element);
}
int dequeue(){
    int element;
    if(isempty()){
        printf("queue is empty\n");
        return (-1);
    }
    else{
        element=q[front];
        if(front == rear){
            front =-1;
            rear = -1;
        }
        else{
            front=(front+1)%size;
        }
    }
    printf("deleted element is : %d\n",element);
    return (element);
}

void display(){
    int i;
    if(isempty())
       printf("empty queue \n");
    else{
        printf("\nfront -- %d\n",front);
        printf("queue -->\n");
        for(i=front; i!= rear;i=(i+1)%size){
            printf("%d",q[i]);
        }
        printf("%d",q[i]);
        printf("rear --> %d\n",rear);
    }   
}

int main()
{
    int choice, element;
    do{
        printf("---options---\n");
        printf("1. enqueue\n 2. dequeue\n 3.display\n");
        printf("enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : printf("enter item to be inserted : ");
                     scanf("%d",&element);
                     enqueue(element);
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