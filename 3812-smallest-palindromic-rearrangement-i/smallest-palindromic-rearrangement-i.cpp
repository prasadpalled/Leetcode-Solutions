class Solution {
public:
    string smallestPalindrome(string s) {
        // int len=s.length();
        // int mid=(len-1)/2;
        // string s2;
        // // cout<<mid<<endl;
        // // if(len==1){
        // //     return s;
        // // }
        // if(len%2==0){
        //   sort(s.begin(),s.begin()+mid+1);
        //   s2.append(s.begin(),s.begin()+mid+1);
        //   reverse(s.begin(),s.begin()+mid+1);
        //   s2.append(s.begin(),s.begin()+mid+1);
        // }
        // else{
        //     sort(s.begin(),s.begin()+mid);
        //     s2.append(s.begin(),s.begin()+mid);
        //     s2+=s[mid];
        //     reverse(s.begin(),s.begin()+mid);
        //     s2.append(s.begin(),s.begin()+mid);
        // }
        // return s2;
        map<char,int> count;
        int mid=(s.length()-1)/2;
        string s2;
        if(s.length()%2==0){
         for(int i=0;i<=mid;i++){
          count[s[i]]++;
         }
         for(auto it: count){
          s2.append(it.second,it.first);
         }
         s=s2;
         reverse(s.begin(),s.end());
         s2.append(s);
        }
        else{
         for(int i=0;i<mid;i++){
          count[s[i]]++;
         }
         for(auto it: count){
          s2.append(it.second,it.first);
         }
         s=s2+s[mid];
         reverse(s.begin(),s.end());
         s2.append(s);
        }
        return s2;
    }
};