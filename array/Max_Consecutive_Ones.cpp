class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
     int countons=0,oldcount=0;

     for(int i=0;i<nums.size();i++){
          if(nums[i]==1)
            countons++;          
          else{
              if(oldcount<countons) oldcount = countons;
            countons = 0;
          }
     }

     if(countons > oldcount) 
        return countons;
     else  return oldcount;

    }
};