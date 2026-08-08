class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        queue<int> q;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<k;i++)
        {
            q.push(nums[i]);
            pq.push({nums[i],i});
        }
        vector<int> ans;
        for(int i =k;i<nums.size();i++)
        {
            ans.push_back(pq.top().first);
            q.pop();
            q.push(nums[i]);
            pq.push({nums[i],i});
            while(pq.top().second<i-k+1)
                pq.pop();
        }
        ans.push_back(pq.top().first);
        return ans;
    }
};
