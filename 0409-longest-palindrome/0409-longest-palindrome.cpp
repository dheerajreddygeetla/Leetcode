class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> char_counts;
        for(char c:s) char_counts[c]++;
        
        int length=0;
        bool has_odd=false;

        for(auto const& [character,count]:char_counts){
            length+=(count/2)*2;

            if(count%2!=0) has_odd=true;
        }
        if(has_odd) length++;

        return length;
    }
};