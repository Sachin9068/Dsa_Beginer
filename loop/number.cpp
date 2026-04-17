#include <bits/stdc++.h>
using namespace std;

void LargestDigit(int number){
    int n = number;
    int large = 0;

    while (n>0)
    {
        int rem = n%10;
        if(rem>large) 
           large=rem;
        n=n/10;
    }

    cout<<"Largest digit of the number is : "<<large;
    
}
void isPrimeNo(int number){
    if(number==0 || number==1)
       return ;
    for(int i=2;i<number;i++){
        if(number%i==0){
            cout<<number<<": is not Prime number";
            return;
        }
       
    }
    cout<<number<<": is Prime number"; 
}

void CountDigitNUmber(int number){

    int n=number;
    int count=0;

    while (n>0)
    {
        int rem = n%10;
        count++;
        n/=10;
    }

    cout<<"digits in a number : "<<count;
    
}

int GcdOrHcf(int num1 , int num2){
    if(num1==0 || num2==0) return 0;
    vector<int>Gcd;
    int n;

    (num1<num2) ? n=num1 : n=num2;

        for(int i=1;i<=n;i++){
            if(num1%i==0 && num2%i==0)
                Gcd.push_back(i);
    }

    // cout<<"Gcd/Hcf : ";
    // for(int i=0;i<Gcd.size();i++)
    //   cout<<Gcd[i]<<" ";

      return Gcd[Gcd.size()-1];

}

void Hcf(int num1,int num2){
    
    cout<<"Hcf : "<<(num1*num2)/GcdOrHcf(num1,num2);
}

void reverse(int number){
    int n = number;
    int rev=0;
    while (n>0)
    {
       int rem = n%10;
       rev = rev*10+rem;
       n=n/10;
    }

   cout<<rev;
    
}

void amstrong(int number){

    int n = number;
    int sum=0;
    while (n>0)
    {
       int rem = n%10;
       sum=sum+(rem*rem*rem);
       n=n/10;
    }

   (sum == number) ?cout<<"number is amstrong" :cout<<"number is not amstrong";
   
    

}

void palindrom(int number){
    int n = number;
    int rev=0;

    while (n>0){
        
        int rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }

    (rev == number) ? cout<<"number is Palindrom" : cout<<"number is not palindrom";
    
}

void fibonacci(int number){

    int a=0,b=1;
    cout<<a<<" "<<b;
    for(int i=2;i<=number;i++){
        int temp = a+b;
        a = b;
        b = temp;
          cout<<" "<<b<<" ";
    }
}

void fectrial(int number){
    int fect=1;
    for(int i=1;i<=number;i++)
       fect*=i;

       cout<<"fectorial of "<<number<<" "<<fect;
}

int main(){
 
   LargestDigit(390);
// isPrimeNo(8);

// int number;
// cout<<"enter the number : ";
// cin>>number;

// reverse(number);
// amstrong(number);
// palindrom(number);
// fibonacci(number);
// GcdOrHcf(12,18);

// Hcf(12,18);
// fectrial(5);
// CountDigitNUmber(1234);




return 0;

}