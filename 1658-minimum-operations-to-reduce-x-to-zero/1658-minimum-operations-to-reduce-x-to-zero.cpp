class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        long long total=0;
        for(int num:nums) total+=num;

        if(total<x) return -1;
        long long target=total-x;
        if(target==0) return n;

        int left=0;
        long long sum=0;
        int max_len=-1;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(sum>target && left<=right){
                sum-=nums[left];
                ++left;
            }
            if(sum==target){
                max_len=max(max_len,right-left+1);
            }
        }
        return max_len==-1? -1:n-max_len;
    }
};