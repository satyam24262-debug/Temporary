#include<stdio.h>
#define max 100
int front = -1;
int rear = -1;
int queue[max];

int full(){
    return rear==max-1;
}

int Empty(){
    return front==-1;
}

void enque(int x){
    if(full()){
        printf("Queue Overflow");
    }
    else{
        if(front==-1){
            front=0;
            queue[++rear] = x;
        }else{
            queue[++rear] = x;
        }
    }
}

int dequeue(int y){
    if(Empty()){
        printf("Queue is Empty");
        return -1;
    }
    else{
        if(rear==front){
            rear = -1;
            front = -1;
        }else{
y = queue[front++];
        }
    }
    return y;
}

void display(){
    if(Empty()){
        printf("Queue is Empty");
        return;
    }
for(int i=front;i<=rear;i++){
    printf("%d ",queue[i]);
}
}

int main(){
    enque(5);
    enque(6);
    enque(7);
    enque(8);
    enque(9);
    display();
    return 0;
}