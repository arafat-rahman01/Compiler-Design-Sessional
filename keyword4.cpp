#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream file("lex.cpp");

    if(!file.is_open()){
        cout<<"file can't open"<<endl;
        return 0;
    }

    string word;

    string keyword[]={
        "int","float","char","double","if","else",
        "for","while","return","void","break","continue"
    };

    while(file>>word){
        string temp="";
        for(char ch:word){
            if(isalnum(ch) || ch=='_'){
                temp+=ch;
            }
        }

        for(string k:keyword){
            if(temp==k){
                cout<<temp<<endl;
                break;
            }
        }
    }

    file.close();
}