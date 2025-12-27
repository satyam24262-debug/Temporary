#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int value;
    struct node *next;
}node;

node* create(int x){
    node* newnode = (node*)malloc(sizeof(node));
    if(!newnode){
        printf("Memory Error");
        return NULL;
    }
    else{
        newnode->value = x;
        newnode->next = newnode;
    }
    return newnode;
}

void insert(node* head, int x){
    node *temp = head;

    while(temp->next!=head){
temp = temp->next;
    }
    node* newnode = create(x);
    temp->next = newnode;
    newnode->next = head;
}

void display(node* head){
    node* temp = head;
    do{
        printf("%d ",temp->value);
        temp = temp->next;
    }
    while(temp!=head);
}

int main(){
    node* head = create(10);
    insert(head,20);
    insert(head,30);
    insert(head,40);
    insert(head,50);
    display(head);
    return 0;
}