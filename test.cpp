//      1 Write a C program for developing a lexical analyzer (LA) that
//      will eliminate white spaces form a source program in C and
//      collect numbers.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ifstream file("lex.cpp");
//     if (!file.is_open())
//     {
//         cout << "File is not open";
//         return 0;
//     }
//     char ch;
//     while (file.get(ch))
//     {
//         if (!isspace(ch))
//         {
//             cout << ch;
//         }
//     }
//     file.clear();
//     file.seekg(0);

//     while (file.get(ch))
//     {
//         if (isdigit(ch))
//         {
//             while (isdigit(ch))
//             {
//                 cout << ch;
//                 if (!file.get(ch))
//                     break;
//             }
//             cout << endl;
//         }
//     }
//     file.clear();
// }

//2.   Write a C program for developing a lexical analyzer (LA) that
//     will eliminate white spaces form a source program in C and
//     collect numbers as token and then also display the token value as
//     attribute

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ifstream file("lex.cpp");
//     if (!file.is_open())
//     {
//         cout << "File is not open";
//         return 0;
//     }
//     char ch;
//     while (file.get(ch))
//     {
//         if (!isspace(ch))
//         {
//             cout << ch;
//         }
//     }
//     file.clear();
//     file.seekg(0);
//     cout<<endl;

//     while (file.get(ch))
//     {
//         if (isdigit(ch))
//         {
//             string num;
//             while (isdigit(ch))
//             {
//                 num+=ch;
//                 if (!file.get(ch))
//                     break;
//             }
//             cout << "Num \t \t" << num << endl;
//         }
//     }
//     file.close();
// }

// 3.   Write a C program for developing a lexical analyzer (LA) that 
//      will recognize the variables in a source program. 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ifstream file("lex.cpp");
//     if(!file.is_open()){
//         cout<<"File is not open";
//         return 0;
//     }

//     string word;

//     string keywords[]={
//         "int","float","double","char","string",
//         "while","return","void","break"
//     };

//     while(file>>word){
//         string var="";
//         for(char ch:word){
//             if(isalnum(ch) || ch=='_') var+=ch;
//         }
//         if(var=="") continue;

//         bool iskeyword=false;

//         for(string k:keywords){
//             if(var==k){
//                 iskeyword=false;
//             }
//         }

//         if(!iskeyword && isalpha(var[0]) || var[0]=='_'){
//             cout<<var<<endl;
//         }
//     }
//     file.close();
// }

// 4)   Write a C program for developing a lexical analyzer (LA) that 
//      will recognize the keywords in a source program. 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ifstream file("lex.cpp");
//     if(!file.is_open()){
//         cout<<"File is not open";
//         return 0;
//     }

//     string word;

//     string keywords[]={
//         "int","double","float","char","string"
//     };

//     while(file>>word){
//         string var="";
//         for(char ch:word){
//             if(isalnum(ch) || ch=='_') var+=ch;
//         }

//         bool iskeyword=false;

//         for(string k:keywords){
//             if(k==var) iskeyword=true;
//         }
//         if(iskeyword) cout<<var<<endl;
//     }
// }

//5)    Design a compiler front-end based on syntax-directed translation 
//      technique that will function as an infix translator for a language 
//      consists of sequence of expressions terminated by semicolon

// #include<bits/stdc++.h>
// using namespace std;
// int priority(char op){
//     if(op=='+' || op=='-') return 1;
//     if(op=='*' || op=='/') return 2;
//     return 0;
// };
// int main(){
//     string infix;
//     cin>>infix;
//     stack<char>st;

//     for(char ch:infix){
//         if(isalnum(ch)) cout<<ch;
//         else if(ch=='(') st.push(ch);
//         else if(ch==')'){
//             while(!st.empty() && st.top()!='('){
//                 cout<<st.top();
//                 st.pop();
//             }
//             if(!st.empty()) st.pop();
//         }
//         else if(ch==';'){
//             while(!st.empty()){
//                 cout<<st.top();
//                 st.pop();
//             }
//             break;
//         }
//         else{
//             while(!st.empty() && st.top() !='(' &&
//                    priority(st.top())>= priority(ch) ){
//                         cout<<st.top();
//                         st.pop();
//                    }
//                    st.push(ch);
//         }
//     }
//     cout<<endl;
// }