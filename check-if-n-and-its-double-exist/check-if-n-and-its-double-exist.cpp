class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
            
        }
        if(m[0]>1)return true;
        for(int i=0;i<arr.size();i++){
            if( ((arr[i]%2==0 && m.count(arr[i]/2)!=0) || m.count(arr[i]*2)!=0) && arr[i]!=0 )return true;
            
        }
        
        return false;
    }
};