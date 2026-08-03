class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.length()==1){
            return s;
        }
        vector<int> freq(26,0);
        string result;
        int mid=-1;
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<freq.size();i++){
            result.append(freq[i]/2,i+'a');
            if(freq[i]%2==1){
                mid=i;
            }
        }
        string first=result;
        reverse(result.begin(),result.end());
        if(mid!=-1){
          first.push_back(mid+'a');
        }
        result=first+result;
        return result;
    }
};