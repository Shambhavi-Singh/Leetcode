class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val)k++;
        }
        int i=0,j=nums.size()-1;
        while(i<k){
            if(nums[j]==val)j--;
            else if(nums[i]==val){
                nums[i]=nums[j];
                i++;
                j--;
            }
            else{
                i++;
            }
        }
        
        return k;
    }
};