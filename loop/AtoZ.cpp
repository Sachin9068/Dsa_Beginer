#include<iostream>
using namespace std;

void AtoZ(int start_alfa,int end_alfa){
     
    char start = 'a'+ start_alfa-1;
    char end = start + end_alfa-1;

    for(char i=start; i<=end; i++)
      cout<<i<<" ";
}

int main(){

    int n,m;

  while (true)
{
    cout<<"Enter start alfabat : ";
    cin>>n;

    cout<<"Enter End alfabat : ";
    cin>>m;
 
    if (n>m)
        cout<<"teri starting value badi he sale chhuit daal" <<endl;
    
    else{
        AtoZ(n,m);
        break;
    }
       
}
    

}
  



