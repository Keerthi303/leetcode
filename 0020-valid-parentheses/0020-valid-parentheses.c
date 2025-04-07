#define MAX 10001
    char stack[MAX];
int top = -1 ;
void push(char ch){
    stack[++top]=ch;
}
void pop(){
    if (top >= 0)top--;
}
int empty(){
    return (top==-1);
}
char Top(){
    return stack[top];
}
bool isValid(char* s) {
    top=-1;
    for(int i = 0 ; s[i] != '\0'; i++){
        if(s[i]== '('||s[i]=='{'||s[i]=='['){
            push(s[i]);
        }
      else if((!empty())&&
      (s[i]=='}'&&Top()=='{'||
      s[i]==']'&&Top()=='['||
      s[i]==')'&&Top()=='('))pop();
        else 
        return false;
    }
    return empty();
}