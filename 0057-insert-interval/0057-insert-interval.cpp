class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> vv;
        int i=0;
        bool flag=false;
        for(i=0;i<intervals.size();i++){
            vector<int> v=intervals[i];
            if(v[1]<newInterval[0]){
               vv.push_back(v);

            }
           
                else if(newInterval[1]<v[0]){
                    vv.push_back(newInterval);
                    flag=true;
                    break;
                }
            
            else{
                newInterval[0]=min(newInterval[0],v[0]);
                newInterval[1]=max(newInterval[1],v[1]);
            }
        }
        if(flag==false)
            vv.push_back(newInterval);
        while(i<intervals.size()){
            vv.push_back(intervals[i]);
            i++;
        }
        return vv;
        
    }
};