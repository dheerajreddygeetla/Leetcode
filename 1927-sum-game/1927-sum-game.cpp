class Solution {
public:
    bool sumGame(string s) {
        double res=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            double sign;
            if(i<n/2) sign=1;
            else sign=-1;

            double val;
            if(s[i]=='?') val=4.5;
            else val=s[i]-'0';

            res+=sign*val;
        }
        if(res!=0.0) return true;
        return false;
    }
};