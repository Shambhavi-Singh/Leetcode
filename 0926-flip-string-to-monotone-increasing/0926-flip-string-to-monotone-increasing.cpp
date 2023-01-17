class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ln= s.size();
        vector<int> leftToRight(ln+1,0), rightToleft(ln+1,0);
        
        for(int i=1,j=ln-1; i<=ln; i++,j--){
            // left to right flip 1 -> 0
            leftToRight[i]= leftToRight[i-1]+(s[i-1]=='1'?1:0);
            // right to left flip 0 -> 1
            rightToleft[j]= rightToleft[j+1]+(s[j]=='0'?1:0);
        }
        
        
        int ans=INT_MAX;
        for(int i=0;i<leftToRight.size();i++){
            ans= min(ans, leftToRight[i]+rightToleft[i]);
        }
        
        return ans;
    }
};