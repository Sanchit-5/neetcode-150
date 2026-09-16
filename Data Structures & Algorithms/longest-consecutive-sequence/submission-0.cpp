class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;

        for(int num : nums) {
            s.insert(num);
        }

        int maxVal = 0;
        for(int it : s) {
            int next = it + 1;
            int count = 1;
            while(s.find(next) != s.end() ) {
                count += 1;
                next +=1;
            }
            maxVal = max(maxVal, count);
        }

        return maxVal;
    }
};
