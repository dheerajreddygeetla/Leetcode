class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int s=0,p=1;
        while(n>0){
            int r=n%10;
            s+=r;
            p*=r;
            n/=10;
        }
        return temp%(s+p)==0;
    }
};