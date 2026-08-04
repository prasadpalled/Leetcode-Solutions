class Solution {
public:
    int reversePairs(vector<int>& nums) {
     int l=0,h=nums.size()-1;
     vector<int> temp(h+1);
     return count(l,h,nums,temp);   
    }
    int count(int l,int h,vector<int>& nums,vector<int>& temp){
        if(l>=h){
            return 0;
        }
        int mid=l+(h-l)/2;
        int left=count(l,mid,nums,temp);
        int right=count(mid+1,h,nums,temp);
        return left+right+merge(l,mid,h,nums,temp);
    }
    int merge(int l,int mid,int h,vector<int>& nums,vector<int>& temp){
        int i=l;
        int j=mid+1;
        int cnt=0;
        while(i<=mid && j<=h){
            if(nums[j]*2LL<nums[i]){
                cnt+=mid-i+1;
                j++;
            }
            else{
                i++;
            }
        }
        i=l;
        j=mid+1;
        int k=0;
        while(i<=mid && j<=h){
            if(nums[j]<nums[i]){
                temp[k]=nums[j];
                j++;
            }
            else{
                temp[k]=nums[i];
                i++;
            }
            k++;
        }
        while(i<=mid){
            temp[k]=nums[i];
            i++;
            k++;
        }
        while(j<=h){
            temp[k]=nums[j];
            j++;
            k++;
        }
        for(int i=0;i<k;i++){
            nums[l+i]=temp[i];
        }
        return cnt;
    }
};