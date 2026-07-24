#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream file("lex.cpp");
    if(!file.is_open()){
        cout<<"File is not open";
        return 0;
    }
    string word;
    
    string keyword[]={
        "int","float","double","if","else","for",
        "while","return","void","break","continue",
        "includebitsstdch","using","namespace","std","main"
    };

    while(file>>word){
        string var="";
        for(char ch:word){
            if(isalnum(ch) || ch=='_') var+=ch;
        }

        if(var=="") continue;

        bool f=false;

        for(string k:keyword){
            if(k==var){
                f=true;
                break;
            }
        }

        if(!f && (isalpha(var[0]) || var[0]=='_')){
            cout<<var<<endl;
        }

    }
    file.close();
}