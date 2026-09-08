class Solution {
public:
    int countCommas(int n) {
        int total=0;
        int divisor=1000;
        while(n>=divisor){
            total+=(n-divisor+1);
            divisor*=1000;
        }
        return total;
    }
};