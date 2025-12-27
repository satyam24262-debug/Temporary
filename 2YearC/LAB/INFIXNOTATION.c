#include <stdio.h>
#include <ctype.h>
char s[20]; int top=-1;
void push(char c){ s[++top]=c; }
char pop(){ return s[top--]; }
int prec(char c){ return (c=='+'||c=='-')?1:(c=='*'||c=='/')?2:0; }

void infixToPostfix(char *in){
    char out[50]; int k=0;
    while(top!=-1) 
    {out[k++]=pop();
    out[k]='\0'; printf("Postfix: %s\n",out);
    }
}

int main(){ 
char in[50]; 
scanf("%s",in); 
infixToPostfix(in); 
}