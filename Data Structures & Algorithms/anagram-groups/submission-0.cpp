class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(string s : strs)
        {
            string temp= s;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s);
        }
        for(auto i : mp)
            ans.push_back(i.second);
        return ans;
    }
};
