#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string keyword[32]={
        "auto","break","case","char","const","continue","default",
        "do","double","else","enum","extern","float","for","goto",
        "if","int","long","register","return","short","signed",
        "sizeof","static","struct","switch","typedef","union",
        "unsigned","void","volatile","while"
    };
    ifstream file("lex.cpp");
    if(!file)
    {
        cout<<"File not found!";
        return 0;
    }
    string word;
    while(file >> word)
    {
        bool isKeyword = false;
        for(int i=0; i<32; i++)
        {
            if(word == keyword[i])
            {
                isKeyword = true;
                break;
            }
        }
        if(!isKeyword && isalpha(word[0]))
        {
            cout << word << " --> Variable" << endl;
        }
    }
    file.close();
}