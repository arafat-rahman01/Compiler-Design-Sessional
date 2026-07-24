#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream file("lex.cpp");
    if(!file.is_open()){
        cout<<"this file is not be open";
        return 0;
    }

    string word;

    string keyword[]={
        "int","float"  
    };
    
    while(file>>word){
        string key="";
        for(char ch:word){
            if(isalnum(ch) || ch=='_') key+=ch;
        }
        for(string k:keyword){
            if(k==key){
                cout<<k<<endl;
            }
        }
    }
    file.close();
}