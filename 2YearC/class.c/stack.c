// // ARRAY IMPLEMENTATION USING STACK
// #include<stdio.h>
// #include<stdlib.h>
// #define max 100
// typedef struct stack{
//     int arr[max];
//     int top;
// }stack;

// void initialize(stack *s){
//     s->top = -1;
// }

// int empty(stack *s){
//     return s->top == -1;
// }

// int full(stack *s){
//     return s->top == max-1;
// }

// void push(stack*s, int x){
//     if(full(s)){
//         printf("stack is full\n");
//         return;
//     }
//     else{
//         s->top++;
//         s->arr[s->top] = x;
//     }
// }

// int pop(stack *s){
//     int y;
//     if(empty(s)){
//         printf("stack is empty\n");
//         return -1;
//     }
//     else{
//         y  = s->arr[s->top];
//         s->top--;
//     }
//     return y;
// }

// int main(){
//     stack s;
//     initialize(&s);
//     push(&s,5);
//     push(&s,6);
//     push(&s,7);
//     push(&s,8);
//     push(&s,9);
//     printf("%d ",pop(&s));
//     printf("%d ",pop(&s));
//     printf("%d ",pop(&s));
//     printf("%d ",pop(&s));
//     printf("%d ",pop(&s));
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *next;
// };

// struct node *top = NULL;// top के पास अभी किसी भी node का address नहीं है, सिर्फ NULL value है

// /* Push operation */
// void push(int x) {
//     struct node *newnode;
//     newnode = (struct node*)malloc(sizeof(struct node));
//     newnode->data = x;
//     newnode->next = top;// 	newnode→next = top, next pointer me top ke andar stored value copy hoti hai, na ki &top
//     top = newnode;
//     printf("%d pushed into stack\n", x);
// }

// /* Pop operation */
// void pop() {
//     if (top == NULL) {
//         printf("Stack Underflow\n");
//     } else {
//         struct node *temp;
//         temp = top;
//         printf("Popped element: %d\n", top->data);
//         top = top->next;
//         free(temp);
//     }
// }

// // /* Peek operation */
// // void peek() {
// //     if (top == NULL)
// //         printf("Stack is empty\n");
// //     else
// //         printf("Top element: %d\n", top->data);
// // }

// /* Display stack */
// void display() {
//     struct node *temp = top;
//     if (top == NULL) {
//         printf("Stack is empty\n");
//     } else {
//         printf("Stack elements:\n");
//         while (temp != NULL) {
//             printf("%d -> ", temp->data);
//             temp = temp->next;
//         }
//         printf("NULL\n");
//     }
// }

// /* Main function */
// int main() {
//     push(10);
//     push(20);
//     push(30);
//     display();
//     peek();
//     pop();
//     display();
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int value;
    struct node* next;
}node;

node* top = NULL;

void push(int x){
    node* newnode = (node*)malloc(sizeof(node));
    if(!newnode){
        printf("Memory Error");
        return ;
    }
    else{
        newnode->value = x;
        newnode->next = top;
        top = newnode;
    }
}

void pop(){
    if(top==NULL){
        printf("stack is Empty.");
        return;
    }
    else{
        printf("%d ",top->value);
        top = top->next;
    }
}

void display(){
    node* temp = top;
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    // display();
    return 0;
}