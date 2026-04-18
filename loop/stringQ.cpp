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

void CoutVolCons(string str){
    int vCount = 0,cCount=0;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if((ch>='a' ||ch>='A') && (ch<='z' || ch<='Z')){

            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vCount++;
            else
                cCount++;
        }
        else
        cout<<ch<<" is not alfabats"<<endl;
       
    }

    cout<<"Total number of Vowels : "<<vCount<<endl;
    cout<<"Total number of consunents : "<<cCount<<endl;
}

void convertLowertoupper(string str){
    int len = 'a'-'A';
    char ch;
    string newstr;
   for(int i=0;i<str.length();i++){
     ch = str[i];
     if(ch>='a' && ch<='z'){
       char lower = ch-len;
       newstr.push_back(lower); 
     }
   else{
       cout<<ch<<" : Charcter is not lower letter "<<endl;
   }
  }

  cout<<newstr<<endl;

}

void spaceRemove(string str){
int j=0;
    for(int i=0;i<str.length();i++){
         if(str[i] == ' '){
            continue;
         }
         else{
            str[j++]=str[i];
         }
    }
    cout<<str;
}

void frquecnyCount(string str){

  unordered_map<char,int>frqCount;

  for(int i=0;i<str.length();i++){
     frqCount[str[i]]++;
  }
  for(auto &[key,value] : frqCount){
     cout<<key<<" : "<<value<<endl;
  }
  
}

int main(){
    frquecnyCount("my name is sachin");
    //   spaceRemove("my name is xyz");
    // convertLowertoupper("sachin");
    // CoutVolCons("Sa#chin");
    // ReverseStr("sachin");
    // Palindrom("qaba");
    return 0;
}