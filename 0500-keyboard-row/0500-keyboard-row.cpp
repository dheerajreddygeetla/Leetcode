class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> m;
        for(char ch :"qwertyuiopQWERTYUIOP") m[ch] = 1;
        for(char ch :"asdfghjklASDFGHJKL") m[ch] = 2;
        for(char ch :"zxcvbnmZXCVBNM") m[ch] = 3;

        vector<string>v;
        for(string &str:words){
            int row = m[str[0]];
            bool flag = true;
            for(char &ch : str){
                if(m[ch] != row){
                    flag = false;
                    break;
                }
            }
            if(flag) v.push_back(str);
        }
        return v;
    }
};