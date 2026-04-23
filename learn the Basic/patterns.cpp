#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
       }
}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern7(int n){

  for(int i=1;i<=n;i++){
    for(int j=1;j<n-i+1;j++){
        cout<<" ";
    }
    for(int k=1;k<=i;k++){
        cout<<"* ";
    }
    cout<<endl;
  }

}

void pattern8(int n){

for(int i=0;i<n;i++){
    for(int j=n-i-1;j>0;j--){
        cout<<"  ";
    }

    for(int k=0;k<=(2*i);k++ ){
        cout<<"* ";
    }

    for(int j=n-i-1;j>0;j--){
        cout<<" ";
    }

    cout<<endl;
}

}

void pattern9(int n){
    for(int i=0;i<n;i++){
    // for(int j=0;j<i;j++){
    //     cout<<"  ";
    // }

    //  for(int k=0;k<(2*n -(2*i))-1;k++ ){
    //     cout<<"* ";
    // }

    // for(int j=0;j<i;j++){
    //     cout<<"  ";
    // }
    for(int j=0;j<(2*n-i)-1;j++)
    {
        if(j < i)
        {
            cout<<"  ";
        }
        else
        {
            cout<<"* ";
        }
    }
    cout<<endl;
}
}

void pattern10(int n){

   for(int i=0;i<n;i++){
      
       for(int j=0;j<n-i;j++){
        cout<<" ";
       }

       for(int k=0;k<(2*i+1);k++){
        cout<<"*";       }

       for(int j=0;j<n-i;j++){
        cout<<" ";
       }
       cout<<endl;
   }
   
   for(int i=1;i<n;i++){
    cout<<" ";
      for(int j=0;j<i;j++){
        cout<<" ";
      }

      for(int k=0;k<(2*n-(2*i+1));k++){
        cout<<"*";
      }

      for(int j=0;j<i;j++){
        cout<<" ";
      }
      cout<<endl;
   }
}

void pattern11(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern12(int n){

    int num ;
    for(int i=0;i<n;i++){
        ((i+1)%2==0) ? num=0:num=1;
        for(int j=0;j<=i;j++){
            cout<<num;
            (num==1) ? num=0 : num=1;
        }
        cout<<endl;
    }

}

void pattern13(int n){

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){

             cout<<j;
        }
       
        for(int s = i;s<=n;s++){
            if(s==n)
            continue;

            cout<<" ";
        } 
        
        for(int k=i;k>0;k--){
            cout<<k;
        }

        cout<<endl;
    }
}

void pattern14(int n){

    int k=1;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<k++<<" ";
    }
    cout<<endl;
 }

}

void pattern15(int n){
    
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<=i;j++){
            cout<<ch++;
        }
        cout<<endl;
    }
}

void pattern16(int n){
    
    for(int i=n;i>0;i--){
        char ch = 'A';
        for(int j=0;j<i;j++){
            cout<<ch++;
        }
        cout<<endl;
    }
}

void pattern17(int n){
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ch;
        }
         ch++;
        cout<<endl;
    }
}

void pattern18(int n){
   
    for(int i=0;i<n;i++){
        char ch = 'A';
        char rch ;
        for(int j=0;j<=i;j++){
            rch = ch;
            cout<<ch++;
        }
        rch--;
       
        for(int k=0;k<i;k++){
            cout<<rch--;
        }
        cout<<endl;
    }

}

void pattern19(int n){
    char ch = 'E';
    for(int i=0;i<n;i++){
        char rch = ch;
        for(int j=0;j<=i;j++){
            cout<<rch++;
        }
        ch--;
        cout<<endl;
    }
}

void pattern20(int n){

  for(int i=0;i<n;i++){
     
     for(int j=(n-i);j>0;j--){
        cout<<"*";
     }
     for(int k=0;k<i;k++){
        cout<<"  ";
     }
    for(int j=(n-i);j>0;j--){
       cout<<"*";
     }

  cout<<endl;


  }

  for(int i=0;i<n;i++){

    for(int j=0;j<=i;j++){
        cout<<"*";
    }
   
    for(int s=(n-i);s>1;s--){
        cout<<"  ";
    }
 
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
  }
  
}

void pattern21(int n){

 for(int i=0;i<n;i++){
    int num = n-i;
    for(int j=0;j<=i;j++){
         if(j==n-1) continue;
        cout<<(n-j);
    }

    for(int s=(n+1-i*2);s>0;s--){
        cout<<(n-i);
    }

    for(int k=0;k<=i;k++){
       
        cout<<num++;
    }


    cout<<endl;
 }


 for(int i=1;i<=n-1;i++){
    int num=n;
   
    for(int j=0;j<n-i;j++){
          cout<<num--;
    }
  num++;
    for(int s=2;s<(2*i)+1;s++){
        cout<<num;
    }

    for(int k=i+1;k<=n;k++){
        
     cout<<k;  
    }
  
    cout<<endl;
 }

}
int main(){

    pattern9(5);
    return 0;
}