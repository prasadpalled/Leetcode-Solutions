class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> result;
        int cur=nums[0],i=0;
        while(i<nums.size()){
         if(cur==nums[i]){
            i++;
            cur++;
         }
         else{
            result.push_back(cur);
            cur++;
         }
        }
        return result;
    }
};