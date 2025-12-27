// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node{
//     int value;
//     struct node* next;
// }node;

// node* create(int x){
//     node* newnode = (node*)malloc(sizeof(node));
//     if(!newnode){
//         printf("Memory Error!");
//         return NULL;
//     }
//     newnode->value = x;
//     newnode->next = NULL;
//     return newnode;
// }

// void add(node* head, int x){
//     node* tem = head;
//     while(tem->next!=NULL){
//         tem=tem->next;
//     }
//     tem->next= create(x); 
// }

// void addSt(node** head,int x){
//     node* tem1 = *head;
//     node* tem2 = create(x);
//     tem2->next = tem1;
//     *head = tem2;
//     free(tem1);
//     free(tem2);
// }

// int search(node* head,int x){
//     node *tem = head;
//     while(tem!=NULL){
//         if(tem->value==x){
//             return 1;
//         }
//         tem = tem->next;
//     }
//     return -1;
// }

// void del(node** head){
//     node* prev = *head;
//     node* next = *head;
//     next = prev->next;
//     prev->next = next->next;
//     *head = prev;
//     free(next);
// }

// void display(node* head){
//     node* tem = head;
//     while(tem!=NULL){
//         printf("%d ",tem->value);
//         tem = tem->next;
//     }
//     tem = NULL;
// }

// int main(){
//     node* head = create(5);
//     add(head,12);
//     // display(head);
//     del(&head);
//     // display(head);
//     addSt(&head,6);
//     display(head);
//     int x = search(head,61);
//     (x==1)?printf("Found!"):printf("NotFound!");
//     return 0;
// }