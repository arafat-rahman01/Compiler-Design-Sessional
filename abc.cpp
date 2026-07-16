#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream file("lex.cpp");

    char ch;
    while(file.get(ch)){
        if(!isspace(ch))
        cout<<ch;
    }

    file.clear();
    file.seekg(0);

    while(file.get(ch)){
        if(isdigit(ch)){
            while(isdigit(ch)){
                cout<<ch;
                if(!file.get(ch))
                break;
            }
            cout<<endl;
        }
    }
    file.close();
}