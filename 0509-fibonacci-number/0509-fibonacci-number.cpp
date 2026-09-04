class Solution {
public:
    int fib(int n) {
        double sqrt5=sqrt(5);
        double fib=pow((1+sqrt5)/2,n)-pow((1-sqrt5)/2,n);
        return round(fib/sqrt5);
    }
};