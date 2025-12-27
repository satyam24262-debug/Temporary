#include<stdio.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
int isEmpty(){
    return front==-1;
}
int isOverFlow(){
 return rear==MAX-1;
}

void enqueue(int x){
    if(isOverFlow()){
        printf("Overflow is Occured!");
    }
    else{
        if(front==-1){
            front=0;
            queue[++rear] = x;
        }
        else{
            queue[++rear] = x;
        }
    }
}

int dequeue(){
if(isEmpty()){
    printf("Queue is Empty");
}
else{
    if(front==rear){
        front=-1;
        rear = -1;
    }
    else{
        printf("Deleted Value is %d\n",queue[front++]);
    }
}
}

void display(){
    if(isEmpty()){
printf("Queue is Empty!");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    dequeue();
    display();
    return 0;
}