#include <stdio.h>
#include <stdlib.h>

typedef struct node { 
    char c; int f; 
    struct node *l,*r; 
}node;

node* newNode(char c,int f, node*l, node*r){
     node* n=malloc(sizeof(node)); 
     n->c=c;n->f=f;n->l=l;n->r=r;
    return n;
}
void print( node* r,int arr[],int top){
    if(r->l){arr[top]=0;print(r->l,arr,top+1);}
    if(r->r){arr[top]=1;print(r->r,arr,top+1);}
    if(!r->l&&!r->r){printf("%c: ",r->c);for(int i=0;i<top;i++)printf("%d",arr[i]);printf("\n");}
}
int main(){
    char c[]={'a','b','c','d'}; 
    int f[]={5,9,12,13},n=4;
     node *a=newNode(c[0],f[0],0,0),*b=newNode(c[1],f[1],0,0);
     node *c1=newNode(c[2],f[2],0,0),*d=newNode(c[3],f[3],0,0);
     node *x=newNode('$',a->f+b->f,a,b);
     node *y=newNode('$',c1->f+d->f,c1,d);
     node *root=newNode('$',x->f+y->f,x,y);
    int arr[10]; print(root,arr,0);
}