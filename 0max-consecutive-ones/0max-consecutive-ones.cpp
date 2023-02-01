class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)ans=0;
            else if(nums[i]==1 && (i==0 || nums[i-1]==1)){
                ans++;
                
            }
            else ans=1;
            if(ans>max)max=ans;
        }
        return max;
    }
};