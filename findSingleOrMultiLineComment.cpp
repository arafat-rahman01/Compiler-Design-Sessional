#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream file("lex.cpp");
    if(!file)
    {
        cout<<"File not found!";
        return 0;
    }
    string line;
    while(getline(file, line))
    {
        if(line.find("//") != string::npos)
        {
            cout<<"Single Line Comment : "<<line<<endl;
        }
        if(line.find("/*") != string::npos)
        {
            cout<<"Multi Line Comment Starts"<<endl;
        }
        if(line.find("*/") != string::npos)
        {
            cout<<"Multi Line Comment Ends"<<endl;
        }
    }
    file.close();
}