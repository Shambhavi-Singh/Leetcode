class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int n=0;
            while(nums[i]!=0){
                nums[i]=nums[i]/10;
                n++;
            }
            if(n%2==0)ans++;
        }
        return ans;
    }
};