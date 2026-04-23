#include<bits/stdc++.h>
using namespace std;

void Find_Large_small(int arr[],int size){
     
    int small,large;
    (arr[0]<=arr[1] ? small = arr[0],large=arr[1]:small = arr[1],large=arr[0]);
   

    for(int i=2;i<size;i++){
        if(small>arr[i]) 
            small=arr[i];
        if(large<arr[i])
            large=arr[i];
    }

    cout<<"smallest number : "<<small<<" largest number : "<<large<<endl;

}

void sum_of_array(int arr[],int size){
    int sum=arr[0];
    for(int i=1;i<size;i++)
       sum+=arr[i];

   cout<<"sum of array : "<<sum<<endl;
}

void reverse_array(int arr[],int size){
    int revArr[size],k=0;

    for(int i=size-1;i>=0;i--)
       revArr[k++] = arr[i];

    for(int i=0;i<size;i++)
      cout<<revArr[i]<<" ";   
}

void count_odd_even(int arr[],int size){
     int even=0,odd=0;
     for(int i=0;i<size;i++){
        if(arr[i]%2==0)
           even++;
        else
           odd++;
     }

     cout<<"total no of even : "<<even<<" and odd : "<<odd<<endl;
}

void find_second_largest(int arr[],int size){

    int largest = arr[0],sec_larg;

    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            sec_larg = largest;
            largest = arr[i];
        }
    }

    cout<<"the second Largest value of array is : "<<sec_larg<<endl;
}


int main(){
    int arr[] = {70,1,4,54,7,37,3,63};
    int n=sizeof(arr)/sizeof(arr[0]);

    find_second_largest(arr,n);
    // count_odd_even(arr,n);
    // reverse_array(arr,n);
    // sum_of_array(arr,n);
    // Find_Large_small(arr,n);

}