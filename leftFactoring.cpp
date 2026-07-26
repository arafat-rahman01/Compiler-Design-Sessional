#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    int pos=str.find('|');

    string p1=str.substr(0,pos);
    string  p2=str.substr(pos+1);

    string common="";
    int i=0;

    while(i<p1.size() && i<p2.size() && p1[i]==p2[i]){
        common+=p1[i];
        i++;
    }
    if(common=="") cout<<"Fact ! pos"<<endl;
    else{
        cout<<"A-> "<<common<<"A'"<<endl;
        cout<<"A-> ";

        if(p1.substr(i)=="") cout<<"#";
        else cout<<p1.substr(i);
        cout<<"|";
        if(p2.substr(i)=="") cout<<"#";
        else cout<<p2.substr(i);
    }
}