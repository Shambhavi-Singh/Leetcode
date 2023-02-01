class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)return false;
        int i=0,j=1;
        bool inc=true;
        int max=INT_MIN;
        for(int k=0;k<arr.size();k++){
            if(arr[k]>max)max=arr[k];
        }
        if(max==arr[arr.size()-1]|| max==arr[0])return false;
        while(j<arr.size()){
            if(arr[i]==max){
                inc=false;
                cout<<"inc is false"<<endl;
                            }

            
            if(inc){
                if(arr[i]>=arr[j]){
                    cout<<"here1";
                    cout<<arr[i];
                    return false;
                }
                else{
                    i++;
                    j++;
                }
            }
            else{
                if(arr[i]<=arr[j]){
                    cout<<"here2";
                    cout<<arr[i];
                    return false;
                }
                else{
                    i++;
                    j++;
                }
            }
        }
        return true;
    }
};