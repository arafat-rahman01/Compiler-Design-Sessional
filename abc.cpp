#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream file("lex.cpp");

    char ch;
    while(file.get(ch)){
        if(!isspace(ch))
        cout<<ch;
    }

    
}