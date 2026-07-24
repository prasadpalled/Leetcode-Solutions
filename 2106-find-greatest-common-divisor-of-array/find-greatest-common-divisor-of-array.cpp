class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a,b;
        for(int i=0;i<nums.size();i++){
          if(a>nums[i]){
            a=nums[i];
          }
          if(b<nums[i]){
            b=nums[i];
          }
        }
        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
};