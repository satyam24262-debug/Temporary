#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int value;
    struct node* next;
}node;

node *create(int x){
node *newnode = (node*)malloc(sizeof(node));
if(!newnode){
    printf("Memory Error");
    exit(-1);
}
else{
    newnode->value = x;
    newnode->next = NULL;
}
return newnode;

}
void ins(node *head, int x){
    node* temp = head;
    while(temp->next!=NULL){}
    temp->next = create(x);
    free(temp);
}
void display(node* head){
node *temp = head;
int count = 0;
while(temp!=NULL){
    count++;
    // printf("%d ",temp->value);
    temp = temp->next;
}
printf("Total Number of nodes are:- %d",count);

free(temp);
}
int main(){
    node *head = create(10);
    ins(head,20);
    display(head);
    return 0;
    
}