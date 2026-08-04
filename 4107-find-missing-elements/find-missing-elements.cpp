class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max= *max_element(nums.begin(),nums.end());
        int min= *min_element(nums.begin(),nums.end());
        vector<int> freq(max-min+1,0);
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]-min]++;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]==0){
                result.push_back(i+min);
            }
        }
        return result;
    }
};