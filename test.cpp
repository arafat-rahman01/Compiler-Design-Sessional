#include<bits/stdc++.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;

int main(){
    FILE *fp;
    int ch;
    fp=fopen("lex.cpp","r");
    if(fp==NULL){
        cout<<"File cannot open";
        return 0;
    }
    cout<<endl;

    while((ch=fgetc(fp))!=EOF){
        if(!isspace(ch)) putchar(ch);
    }
    rewind(fp);

    while((ch=fgetc(fp))!=EOF){
        if(isdigit(ch)){
            while(isdigit(ch)){
                putchar(ch);
                ch=fgetc(fp);
            }
            cout<<endl;
        }
    }
    fclose(fp);
}