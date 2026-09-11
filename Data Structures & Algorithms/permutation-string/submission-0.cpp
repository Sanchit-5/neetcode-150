class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size()) return false;
        int freq1[26] = {0};
        int freq2[26] = {0};
        for(char &ch : s1) {
            freq1[ch - 'a']++;
        }
        int i = 0, j = 0;
        while(j < s2.size()) {
            freq2[s2[j] - 'a']++;
            if(j-i+1 == s1.size()) {
               if (equal(begin(freq1), end(freq1), begin(freq2)))
return true;
                freq2[s2[i] - 'a']--;
                i++;
            }
            j++;
        }
        return false;
    }
};