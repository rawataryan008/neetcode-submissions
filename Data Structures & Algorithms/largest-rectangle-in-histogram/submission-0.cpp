class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        stack<int> st;
        int res=0;
        for(int  i=0;i<arr.size();i++)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                int x = st.top();
                st.pop();
                int width = st.empty() ? i : i-st.top()-1;
                res = max(res,width*arr[x]);
            }
            st.push(i);
        }

        while(!st.empty())
        {
            int x = st.top();
            st.pop();
            int width = st.empty() ? arr.size() : arr.size()-st.top()-1;
            res = max(res,width*arr[x]);
        }
        return res;
    }
};
