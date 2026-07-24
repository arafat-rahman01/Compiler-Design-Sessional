#include<bits/stdc++.h>
using namespace std;
int priority(char op){
    if(op=='+' || op=='-') return 1;
    if(op=='*' || op=='/') return 2;
    return 0;
}
int main(){
    string infix;cin>>infix;
    stack<char>st;

    for(char ch:infix){
        if(isalnum(ch))cout<<ch;
        else if(ch=='(') st.push(ch);
        else if(ch==')'){
            while(!st.empty() && st.top()!='('){
                cout<<st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else if(ch==';'){
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
            break;
        }
        else{
            while(!st.empty() && st.top() != '(' &&
                   priority(st.top()) >= priority(ch)){
                    cout<<st.top();
                    st.pop();
            }
            st.push(ch);
        }
    }
    cout<<endl;
}