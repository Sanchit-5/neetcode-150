class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()) return "";
        unordered_map<char, int>m;
        for(char &ch : t) {
            m[ch]++;
        }
        int minwindow = INT_MAX, countRequirement = t.size(), i = 0, j = 0, start_i = 0;
        while(j < s.size()) {
            if(m[s[j]] > 0) {
                countRequirement--;
            }
            m[s[j]]--;
            while(countRequirement == 0) {
                if(minwindow > j-i+1) {
                    minwindow = j-i+1;
                    start_i = i;
                }
                m[s[i]]++;
                if(m[s[i]] > 0) {
                    countRequirement++;
                }
                i++;
            }
            j++;
        }
        return minwindow == INT_MAX ? "" : s.substr(start_i, minwindow);
    }
};