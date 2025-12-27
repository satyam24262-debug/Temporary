#include<stdio.h>
#include<string.h>

void toPostorder(char expr[],int start , int end){
    if(start==end){
        printf("%c",expr[start]);
        return;
    }
int i;
int bracket = 0;
for(i = end; i>=start; i--){
    if(expr[i]==')') bracket++;
    else if(expr[i]=='(') bracket--;
    else if((expr[i]=='+'||expr[i]=='-') && bracket ==0)
    break;
}
if(i<start){
    for(i=end;i>=start;i--){
        if(expr[i]==')') bracket++;
    else if(expr[i]=='(') bracket--;
    else if((expr[i]=='*'|| expr[i]=='/')&&bracket==0) break;
}
}
if(expr[start]=='('&&  expr[end]==')'){
    toPostorder(expr,start+1,end-1);
}else{
    toPostorder(expr,start,i-1);
    toPostorder(expr,i+1,end);
    printf("%c",expr[i]);
}
}
int main(){
    char expr[100];
    printf("Enter inflix expression :-");
    scanf("%s",expr);
    printf("postfix expression:-");
    toPostorder(expr,0,strlen(expr)-1);
    printf("\n");
    return 0;
}