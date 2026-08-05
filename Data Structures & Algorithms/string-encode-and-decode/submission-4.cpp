class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto i : strs)
            ans+=i+"~";
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp="";
        for(auto c:s)
        {
            if(c=='~')
            {
                ans.push_back(temp);
                temp="";
            }
            else
                temp+=c;
        }
        return ans;
    }
};
