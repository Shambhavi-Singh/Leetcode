class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_set<string> t(ideas.begin(), ideas.end());
        unordered_map<char, unordered_map<char,int>> mp;
        for(auto& str : t){
            string s = str;
            char prev = s[0];
            for(char ch='a'; ch<='z'; ch++){
                s[0] = ch;
                if(t.find(s) == t.end()) 
                    ++mp[ch][prev];
            }
        }
        long long ans=0;
        for(auto& str : t){
            string s = str;
            char prev = s[0];
            for(char ch='a'; ch<='z'; ch++){
                s[0] = ch;
                if(t.find(s) == t.end())
                    ans += mp[prev][ch];
            }
        }
        return ans;
    }
};