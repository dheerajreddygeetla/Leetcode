class Solution {
public:
    int longestPalindrome(string s) {
        int odd_count=0;
        unordered_map<int,int> mp;
        for(char c:s){
            mp[c]++;
            if(mp[c]%2==1) odd_count++;
            else odd_count--;
        }
        if(odd_count>1) return s.length()-odd_count+1;
        return s.length();
    }
};