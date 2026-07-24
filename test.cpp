#include<bits/stdc++.h>
using namespace std;
int main(){
    string infix;
    stack<char>st;

    cin>>infix;

    for(char ch:infix){
        if(isalnum(ch)){
            cout<<ch;
        }

        else if(ch=='('){
            st.push(ch);
        }

        else if(ch==')'){
            while(!st.empty() && st.top()!='('){
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }

        else if(ch==';'){
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
            break;
        }
        else{
            while(!st.empty() && priority(st.top())=>priority(ch)){
                cout<<st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    return 0;
}