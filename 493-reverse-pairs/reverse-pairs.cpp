class Solution {
public:
    int reversePairs(vector<int>& nums) {
     int l=0,h=nums.size()-1;
     return count(l,h,nums);   
    }
    int count(int l,int h,vector<int>& nums){
        if(l>=h){
            return 0;
        }
        int mid=l+(h-l)/2;
        int left=count(l,mid,nums);
        int right=count(mid+1,h,nums);
        return left+right+merge(l,mid,h,nums);
    }
    int merge(int l,int mid,int h,vector<int>& nums){
        int i=l;
        int j=mid+1;
        int cnt=0;
        long long x;
        while(i<=mid && j<=h){
            x=nums[j]*2LL;
            if(x<nums[i]){
                cnt+=mid-i+1;
                j++;
            }
            else{
                i++;
            }
        }
        i=l;
        j=mid+1;
        vector<int> temp;
        while(i<=mid && j<=h){
            if(nums[j]<nums[i]){
                temp.push_back(nums[j]);
                j++;
            }
            else{
                temp.push_back(nums[i]);
                i++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=h){
            temp.push_back(nums[j]);
            j++;
        }
        for(int i=0;i<temp.size();i++){
            nums[l+i]=temp[i];
        }
        return cnt;
    }
};