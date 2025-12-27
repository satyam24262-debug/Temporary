// INSERT A NODE AT THE BEGNING OF THE LINKED LIST
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int value;
    struct node* next;
}node;

node *create(int x){
    node* newnode = (node*)malloc(sizeof(node));
    if(!newnode){
        printf("Memory Error!");
        exit(-1);
    }
    else{
        newnode->value = x;
        newnode->next = NULL;
    }
    return newnode;
}

void insBeg(node **head,int x){
node *temp = create(x);
temp->next = *head;
*head = temp;
free(temp);
}

void display(node* head){
    node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
}
int main(){
    node *head = create(10);
    // display(head);
    insBeg(&head,20);
    display(head);
    return 0;
}