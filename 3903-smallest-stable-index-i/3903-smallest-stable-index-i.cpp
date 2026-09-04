class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> suffix(n);

        int min_score=INT_MAX;
        for(int i=n-1;i>=0;i--){
            min_score=min(min_score,nums[i]);
            suffix[i]=min_score;
        }

        int max_score=INT_MIN;
        for(int i=0;i<n;i++){
            max_score=max(max_score,nums[i]);
            if(max_score-suffix[i]<=k) return i;
        }
        return -1;
    }
};