#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int value;
    struct node* next;
}node;

node *create(int x){
    node * newnode = (node*)malloc(sizeof(node));
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
void insert(node *head,int x){
node *temp = head;
while(temp->next!= NULL){
    temp = temp->next;
}
temp->next = create(x);
// free(temp);
}

void delete(node** head){
    if(*head==NULL) return;
    node* temp = *head;
    *head = temp->next;
    temp->next = NULL;
    free(temp);
}

void display(node* head){
    node* tem = head;
    while(tem!=NULL){
        printf("%d ",tem->value);
        tem = tem->next;
    }
}

int main(){
    node *head = create(10);
    insert(head,20);
    delete(&head);
    display(head);
    return 0;
}