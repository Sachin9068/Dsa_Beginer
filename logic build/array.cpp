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

int main(){
    int arr[] = {1,4,7,37,3,63};
    int n=sizeof(arr)/sizeof(arr[0]);
    sum_of_array(arr,n);
    // Find_Large_small(arr,n);

}