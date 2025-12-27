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
}
temp->next = create(x);
free(temp);
}


void display(node* head){
    node* tem = head;
    while(tem!=NULL){
        printf("%d ",tem->value);
        tem = tem->next;
    }
    free(tem);
}
void search(node *head, int x){
    node* temp = head;
    while(temp!=NULL){
        if(temp->value = x){
            printf("YES");
            return ;
        }
        else{

        }
        temp = temp->next;
    }
    free(temp);
}


int main(){
    node *head = create(20);
    insert(head,20);
    search(head,10);
    // display(head);
    return 0;
}