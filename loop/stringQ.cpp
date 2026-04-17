#include<bits/stdc++.h>
using namespace std;

string ReverseStr(string str){

    int len = str.length();
    string newstr;

    for(int i = len - 1; i >= 0; i--){
        newstr.push_back(str[i]);
    }

    cout << "str : " << newstr;
    return newstr;
}

void Palindrom(string str){
    string revStr = ReverseStr(str);

    if(str == revStr)
      cout<<"This String is pailndrom";
    else
      cout<<"This String is not Pailndrom";

}

int main(){
   
    // ReverseStr("sachin");
    Palindrom("qaba");
    return 0;
}