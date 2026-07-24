class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int > result;
        while(left<=right){
            if(flag(left)){
             result.push_back(left);
            }
            left++;
        }
        return result;
    }
    int flag(int left){
      int n=left;
        while(n!=0){
         int rem=n%10;
         if(rem==0){
            return 0;
         }
         if(left%rem!=0){
            return 0;
         }
         n=n/10;
        }
        return 1;
    }
};