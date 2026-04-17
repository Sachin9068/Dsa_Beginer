#include<iostream>
using namespace std;

void pattern(int start_val,int end_val){
   
   for(int i=1;i<=end_val;i++){

    for(int j=1;j<=i;j++){
         cout<<j<<" "; 
    }
    cout<<endl;
   } 
 
}

void DimondPatt(int n){
    
    for(int i=1;i<=n;i++){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
           cout<<"* ";
        }
        cout<<endl;

    }
       for(int i=n;i>=1;i--){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
           cout<<"* ";
        }
        cout<<endl;

    }


}

void tractanglePAtt(int col, int row){

    // for(int i=1;i<=row;i++){
        
    //     if(i==1 || i==row){
    //         for(int j=0;j<col;j++)
    //           cout<<"*";
    //     }
    //     else{
    //         for(int k=1;k<=col;k++){
    //             if(k==1 || k==col){
    //                 cout<<"*";
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //     }
    for(int i=1;i<=row;i++){
        
            for(int k=1;k<=col;k++){
                if(k==1 || k==col || i == 1 || i == row){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
         
        cout<<endl;

         
    

}

int main(){

// pattern(1,5);
// DimondPatt(5);
tractanglePAtt(6,4);
}
  



