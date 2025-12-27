// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node * next;
// };
// void InBeg(struct node** head,int newdata){
//     struct node* newnode = (struct node*)malloc(sizeof(struct node));
//     newnode->data = newdata;
//     newnode->next = *head;
//     *head = newnode;
// }
// void dis(struct node * head){
//     printf("linked list: ");
//     while(head!=NULL){
//         printf("%d->",head->data);
//         head = head->next;
//     }
//     printf("Null\n");
// }
// int main(){
//     struct node* head = NULL;
//     InBeg(&head,30);
//     dis(head);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     char val;
//     struct node* next;
// };
// void create(struct node ** head ){
//   char vibjyor[] = {'V','I','B','J','Y','O','R'};
//        struct node *last;
//        for(int i=0;i<7;i++){
//        struct node* newnode = (struct node*)malloc(sizeof(struct node));
//        newnode->val=vibjyor[i];
//        newnode->next = NULL;
//        if(*head==NULL){
//         *head = newnode;
//         last = newnode;
//        }
//        else{
//         last->next = newnode;
//         last =newnode;
//        }
//        }
// }
// void display(struct node* head){
//           struct node* tem;
//           tem = head;
//           while (tem!=NULL)
//           {
//             printf("%c -> ",tem->val);
//             tem = tem->next;
//           }
//           printf("NULL\n");
// }
// void delete(struct node **head){
//   struct node *tem , *pre;
//   pre = *head;
//   tem = pre->next;
//   pre->next = tem->next;
//   tem->next = NULL;
//   free(tem);
// }
// void searching(struct node* head , char key){
//       struct node* tem;
//       tem = head;
//       while (tem!=NULL)
//       {
//         if(tem->val==key){
//           printf("%c : is found in the given link list\n",tem->val);
//           return;
//         }
//         else{
//           tem = tem->next;
//         }
//       }
//       printf("%c : is Not find in the given link list\n",key);
// }
// void add(struct node * head , char value){
//   struct node * adding = (struct node*)malloc(sizeof(struct node));
//   adding->val = value;
//   adding->next = NULL;
//   struct node * temp;
//   temp = head;
//   adding->next = temp->next;
//   temp->next = adding;
// }
// int main(){
//     struct node *head = NULL;
//     create(&head);
//     printf("Creation operation on linear link list:-\n");
//     display(head);
//     delete(&head);
//     printf("After deletion operation on linear link list:-\n");
//     display(head);
//     printf("Seaching operation on linear link list:-\n");
//     searching(head,'K');
//     add(head ,'N');
//     printf("After adding operation on linear link list:-\n");
//     display(head);
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// struct node *head; // to make as a global struct node type pointer
// struct node{
//   int data;
//   struct node *next;
// };
// struct node * creat(int a){
//   struct node* newnode;
//   newnode = (struct node*)malloc(sizeof(struct node));
//   newnode->data = a;
//   newnode->next = NULL;
//   return newnode;
// }
// void add(int arr[4]){
//   struct node *add;
//   struct node *tem;
//   tem = head;
//   for(int i=0;i<4;i++){
//   add = creat(arr[i]);
//   tem->next = add;
//   tem = add;
//   }
//   tem->next = NULL;
//   add->next = NULL;
// }

// void delete(){
//   struct node * temp;
//   temp = head->next;
//   head->next = temp->next;
//   free(temp);
// }
// void headchange(){
//   struct node *temp;
//   temp = head;
//   head = temp->next;
//   free(temp);
// }
// void addtoHead(){
//   struct node * add;
//   add = creat(5);
//   struct node *temp;
//   temp = head;
//   add->next = temp;
//   head = add;
// }

// void display(struct node * head){
//   struct node *k;
//   k = head;
//   while(k!=NULL){
//    printf("%d->",k->data);
//    k=k->next;
//   }
//   printf("Null");
// }
// int main(){
//  head = creat(10);
//  int arr[4] = {20,30,40,50};
//  add(arr);
//  display(head); 

//  delete();
//  display(head);
//  headchange();
//  display(head);
//  addtoHead();
//  display(head);
//   return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// typedef struct Node{
// int rollno;
// struct Node *next;
// }Node;
// Node* create(int x){
// Node  *newnode = (Node*)malloc(sizeof(Node));
// if(!newnode){
//   printf("Memory allocation error");
//   exit(1);
// }
// else{
// newnode->rollno = x;
// newnode->next = NULL;
//   }
//   return newnode;
// }
// void add(Node *head,int x){
//   Node *tem = head;
//   while(tem->next!=NULL){
//     tem = tem->next;
//   }
//   tem->next = create(x);
//   tem = NULL;
// }
// void welcome(Node* head){
//   Node *temp;
//   temp =  head;
//   while(temp!=NULL){
//     printf("%d ",temp->rollno);
//     temp = temp->next;
//   }
//   temp = NULL;
// }
// void count(Node *head){
//   Node *tem = head;
//   int cnt = 0;
//   while(tem!=NULL){
//     cnt++;
//     tem = tem->next;
//   }
//   printf("\nNumber of Nodes are:-\n");
//   printf("%d",cnt);
// }
// int main(){
//   Node *head = create(5);
//   add(head,6);
//   add(head,7);
//   add(head,8);
//   add(head,9);
//   welcome(head);
//   count(head);
//   return 0;
// }



// DOUBLY LINKED LIST
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node {
//     int x;
//     struct node *pre;
//     struct node *pos;
// } node;

// node* create(int value) {
//     node* newnode = (node*)malloc(sizeof(node));
//     if (!newnode) {
//         printf("Memory Error");
//         exit(1);
//     }
//     newnode->pre = NULL;
//     newnode->pos = NULL;
//     newnode->x = value;
//     return newnode;
// }

// void display(node* head) {
//     node *tem = head;
//     while (tem != NULL) {
//         printf("%d ", tem->x);
//         tem = tem->pos;
//     }
// }

// int main() {
//     node *head = create(7);   // head node create किया
//     head->pos = create(10);
//     head->pos->pre = head;
//     head->pos->pos = create(12);
//     head->pos->pos->pre = head->pos;

//     display(head);
//     return 0;
// }
