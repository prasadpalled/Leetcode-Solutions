class Solution {
public:
    int maxProduct(vector<int>& nums) {
            int firstMax=nums[0],secondMax=0;
            for(int i=1;i<nums.size();i++){
              if(firstMax>nums[i]){
                secondMax=max(secondMax,nums[i]);
              }
              else{
                secondMax=firstMax;
                firstMax=nums[i];
              }
            }
            return (firstMax-1)*(secondMax-1);
    }
};