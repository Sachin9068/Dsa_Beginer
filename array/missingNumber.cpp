

// 1 approch = sum of 1 to n and then sum of array value . after these two task complete sum - array sum = missing valueint missingNum(int *arr, int size) {
   int sum=0,msum=0;
   for(int i=1;i<=size+1;i++){
       sum+=i;
   }
   
   for(int i=0;i<size;i++){
       msum+=arr[i];
   }
   
   int mis = sum-msum;
   
   return mis;
}
