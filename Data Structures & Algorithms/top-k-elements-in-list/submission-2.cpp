class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        vector<int>result;
        int n = nums.size();

        for(auto it : nums) {
            m[it]++;
        }

        vector<vector<int>> arr(n+1);

        for(auto it : m) {
            arr[it.second].push_back(it.first);
        }

        for(int i=n; i>=0 && result.size() < k; i--) {
            for(auto num : arr[i]) {
                result.push_back(num);
                if(result.size() == k) break;
            }
        }

        return result;
    }
};
