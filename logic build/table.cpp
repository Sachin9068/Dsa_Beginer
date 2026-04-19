#include<iostream>
using namespace std;

void table(int start_table ,int end_table){

for(int i = start_table; i<=end_table; i++){
    cout<<"table of : "<<i<<endl;   
    for(int j=1;j<=10;j++){
        cout<<i<<" * "<<j<<" = "<<i*j << endl;
    }
}
}

int main(){
 
int n,m;

while (true)
{
    cout<<"Enter start table : ";
    cin>>n;

    cout<<"Enter End table : ";
    cin>>m;
 
    if (n>m)
        cout<<"teri starting value badi he sale chhuit daal" <<endl;
    
    else{
        table(n,m);
        break;
    }
       
}




}