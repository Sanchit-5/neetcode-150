class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0, left = 0;
        unordered_map<char, int>m;
        for(int right = 0; right<s.size(); right++) {
            if(m.find(s[right]) != m.end() && m[s[right]] >= left) {
                left = m[s[right]] + 1;
            }
            m[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};