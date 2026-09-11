class Solution {
public:

    string generate(string str) {
        int arr[26] = {0};
        
        for(char &ch : str) {
            arr[ch - 'a']++;
        }

        string new_word = "";

        for(int i=0; i<26; i++) {
            int freq = arr[i];
            new_word += string(freq, i + 'a');
        }
        
        return new_word;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>>m;
        int n = strs.size();

        for(int i=0; i<n; i++) {
            string word = strs[i];
            string new_word = generate(word);
            m[new_word].push_back(word);
        }

        for(auto it : m) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
