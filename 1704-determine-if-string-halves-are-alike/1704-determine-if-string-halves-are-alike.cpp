class Solution {
public:
    bool halvesAreAlike(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
            if(i<s.length()/2){
                if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117) count++; 
            }else{
                if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117) count--;
            }
        }
        return count==0;
    }
};