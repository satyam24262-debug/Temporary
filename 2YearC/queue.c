#include<stdio.h>
#define MAX 5
int queue[MAX];
int front =-1,rear = -1;
int isEmpty(){
    return front==-1;
}
int isFull(){
    return rear==MAX-1;
}
void enqueue(int val){
    if(isFull()){
        printf("Queue is overflow!");
    }
    else{
        if(front==-1){
            front=0;
            printf("Inserted value is %d\n",val);
            queue[++rear] = val;
        }
        else{
            printf("Inserted value is %d\n",val);
            queue[++rear] = val;
        }
    }
}
void dequeue(){
    if(isEmpty()){
        printf("queue is underflow!");
    }else{
       printf("delete value is %d\n",queue[front]);
       if(rear==front){
        rear=-1;
        front=-1;
       }
       else{
        front++;
       }
    }
}
void display(){
    if(isEmpty()){
        printf("Queue is Empty.");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("Queue items is : %d\n",queue[i]);
        }
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    display();
    return 0;
}



