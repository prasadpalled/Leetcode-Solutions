class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int prefix=1;
       int suffix=1;
       int maxP=INT_MIN;
       int n=nums.size();
       for(int i=0;i<n;i++){
        prefix*=nums[i];
        suffix*=nums[n-i-1];
        maxP=max(maxP,max(prefix,suffix));
        if(nums[i]==0){
            prefix=1;
        }
        if(nums[n-i-1]==0){
            suffix=1;
        }
       }
       return maxP;
    }
};