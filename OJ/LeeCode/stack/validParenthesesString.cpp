#include<stdio.h>
#include<string.h>
int isPrimitive(char * a){
    int i=0,j,cnt = 0;
    for(i = 0;i<strlen(a);i++){
        if(a[i] == '('){
            if(a[++j] =='(')
                cnt++;
            else    
                cnt--;
            if(cnt == 0 && a[i+1]==')'){
                 printf("1");
                 j = i+1;
            }
        }
    }
}

int main(){
   // char "(()()()())((())())";
    return 0;
}
char * removeOuterParentheses(char * S){
    int cnt = 0,k = 0;
    for(int i = 0;i < strlen(S);i++){
        if(S[i] == '('){
            if(cnt != 0) S[k++] = S[i];
            cnt ++;
        }
        if(S[i] == ')'){
            cnt--;
            if(cnt != 0) S[k++] = S[i];
        }
    }
    S[k] = '\0';
    return S;
}
