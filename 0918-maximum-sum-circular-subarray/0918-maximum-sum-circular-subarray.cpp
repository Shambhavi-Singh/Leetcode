class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
         if(nums.size()==1) return nums[0];
        int n=nums.size();
        
        int sabsebada=INT_MIN; //greatest negative integer
        int possum=0;//positive sum for normal kadane
        int ans=INT_MAX; // minimum sum subarray
        int kadane=INT_MIN; //max sum subarray 
        int sum=0; //negative sum for reverse kadane
        int totsum=0; //total sum 
        int posfound=0; // just to check if there is a positive number found
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) posfound=1;
            possum+=nums[i];
            if(possum<0) possum=0;
            kadane=max(kadane,possum); //kadane normal


            totsum+=nums[i];  //tot sum
            sabsebada=max(sabsebada,nums[i]);
            sum+=nums[i];
            if(sum>0) sum=0;
            ans=min(ans,sum);  //minimum sum subarray
        }
        if(posfound==0) kadane=INT_MIN;
        if(totsum==ans){
            return max(kadane,sabsebada);
        }
        return max(totsum-ans,kadane);
    }
};