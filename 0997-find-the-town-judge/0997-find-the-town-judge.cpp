class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> v(n, vector<int> (2, 0));
        for(int i = 0; i < trust.size(); i++) {
            ++v[trust[i][0]-1][0];
            ++v[trust[i][1]-1][1];
        }
        for(int i = 0; i < n; i++) {
            if(v[i][0] == 0 and v[i][1] == n-1) return i+1;
        }
        return -1;
    }
};