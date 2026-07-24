#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream file("lex.cpp");
    if(!file.is_open()){
        cout<<"File is not open";
        return 0;
    }
    char ch;
    while(file.get(ch)){
        if(!isspace(ch)){
            cout<<ch;
        }
    }
    cout<<"\n \n";

    file.clear();
    file.seekg(0);

    while(file.get(ch)){
        if(isdigit(ch)){
            while(isdigit(ch)){
                cout<<ch;
                if(!file.get(ch)) break;
            }
            cout<<endl;
        }
    }
    file.close();
}