class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int>m;
        for(char ch : s) {
            m[ch]++;
        }

        for(char c : t) {
            if(m.find(c) != m.end()) {
                if(m[c] > 1){
                    m[c]--;
                }else {
                    m.erase(c);
                }
            }else {
                return false;
            }
        }
        return true;
    }
};
