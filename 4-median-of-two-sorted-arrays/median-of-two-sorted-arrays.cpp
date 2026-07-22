class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergeArray;
        int i=0,j=0,mid;
        double result;
        while(i<nums1.size()&&j<nums2.size()){
          if(nums1[i]<nums2[j]){
           mergeArray.push_back(nums1[i]);
           i++;
           
          }
          else{
            mergeArray.push_back(nums2[j]);
            j++;
          }
        }
        while(i<nums1.size()){
           mergeArray.push_back(nums1[i]);
           i++;
        }
        while(j<nums2.size()){
           mergeArray.push_back(nums2[j]);
           j++;
        }
        mid=(mergeArray.size()-1)/2;
        if(mergeArray.size()%2==0){
          result=(mergeArray[mid]+mergeArray[mid+1])/2.0;
        }
        else{
          result=mergeArray[mid];
        }
        
        return result;
    }
};