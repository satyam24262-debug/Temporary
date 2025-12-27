#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
typedef struct stack
{
    int arr[MAX_SIZE];
    int top;
}stack;

void initilize(stack *s){
s->top = -1;
}
// int isEmpty(stack *s){
//     return s->top==-1;
// }
int isFull(stack *s){
    return s->top==sizeof(s->arr)/sizeof(s->arr[0]);
}
void push(stack *s , int val){
    if(isFull(s))
    {
        printf("Stack is full\n");
        return;
    }
    s->arr[++(s->top)]= val;
}
// int pop(stack *s){
//     if(isEmpty(s)){
//         printf("stack is empty!\n");
//         exit(1);
//     }
//     return s->arr[(s->top)--];
// }
int main(){
    stack s;
    initilize(&s);
    push( &s ,10);
    return 0;
    printf("%d",arr[s->top]);
}