#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream file("lex.cpp");
    if(!file.is_open()){
        cout<<"file is not open";
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
            string num="";
            while(isdigit(ch)){
                num+=ch;
                if(!file.get(ch)) break;
            }
            cout<<"Num \t\t"<<num<<endl;
        }
    }
    file.close();
}