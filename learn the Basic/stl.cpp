
#include<bits/stdc++.h>
using namespace std;

void explianPair(){
    // pair<int,int>p = {1,3};
    // cout<< p.first <<" "<< p.second;

  // nested pair
    // pair<int,pair<int,int>>p = {1,{2,3}};
    // cout<< p.first << " " << p.second.second << " " <<p.second.first;

  // array
    pair<int,int>arr[] = {{1,2},{6,5},{7,1}};
    cout<<arr[0].second;
}

void explinVector(){

    vector<int>v;

    v.push_back(1);
    v.emplace_back(2);

//pair in vector
    // vector<pair<int,int>>vec;

    // vec.push_back({2,3});
    // vec.emplace_back(4,5);

// set vector size and value 
    // vector<int>ve(5,89);

// set vector size 
    //  vector<int>ve(5); 

 
    // vector<int>v1(5,20);
    // vector<int>v2(v1);


for(vector<int>::iterator it = v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
}

for(auto it = v.begin();it!=v.end();it++){
    cout<< *(it) << " ";
}

for(auto it : v){
    cout<<it<< " ";
}


// v.erase(v.begin()+1);

// v.erase(v.begin()+2,v.begin()+4);

}

void explinList(){

    list<int>ls;
    

}

int main(){

    // explinVector();
    // explianPair();
    return 0;

}