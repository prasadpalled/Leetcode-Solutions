class Solution {
public:
    int search(vector<int>& nums, int target) {
       int k=nums.size()-1,h,l,mid;
       for(int i=1;i<nums.size();i++){
        if(nums[i]<nums[i-1]){
            k=i-1;
            break;
        }
       }
       if(target<=nums[k] && target>=nums[0]){
         l=0;
         h=k;
         cout<<"hi";
       }
       else{
        l=k+1;
        h=nums.size()-1;
       }
       while(l<=h){
        mid=l+(h-l)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
       }
       return -1;
    }
};