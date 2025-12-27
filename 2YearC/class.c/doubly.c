#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int value;
    struct node *pre , *next;
}node;

node *create(int x){
    node *newnode = (node*)malloc(sizeof(node));
    if(!newnode){
        printf("Memory Error");
    }
    else{
        newnode->value = x;
        newnode->next = NULL;
        newnode->pre = NULL;
    }
}

void inser(node* head, int x){
    if(head==NULL){
        printf("head is null");
        return;
    }
node* temp = head;
while(temp->next!=NULL){
    temp = temp->next;
}
node* newnode = create(x);
temp->next = newnode;
newnode->pre = temp;
}

void display(node *head){
node* temp = head;
while(temp!=NULL){
    printf("%d ",temp->value);
    temp = temp->next;
}
}

int main(){
    node* head = create(10);
    inser(head,20);
    inser(head,30);
    inser(head,40);
    inser(head,50);
    display(head);
    return 0;
}