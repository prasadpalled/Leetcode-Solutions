class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index;
        int diff;
        for(int i=0;i<nums.size();i++){
          diff=target-nums[i];
          if(index.count(diff)){
            return {index[diff],i};
          }
          index[nums[i]]=i;
        }
        return {};
    }
};