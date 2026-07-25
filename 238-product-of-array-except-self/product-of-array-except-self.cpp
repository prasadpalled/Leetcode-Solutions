class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> suffix(n);
        vector<int> result(n);
        suffix[n-1]=nums[n-1];
        for(int i=nums.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i];
        }
        int prefix=1;
        for(int i=0;i<n-1;i++){
          result[i]=prefix*suffix[i+1];
          prefix*=nums[i];
        }
        result[n-1]=prefix;
        return result;
    }
};