class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;

        for(int i = 0; i < strs.size(); i++) {

            int arr[26] = {0};

            for(int j = 0; j < strs[i].size(); j++) {
                char ch = strs[i][j];
                arr[ch - 'a']++;
            }

            string key = "";

            for(int x = 0; x < 26; x++) {
                while(arr[x] != 0) {
                    key.push_back(x + 'a');
                    --arr[x];
                }
            }

            m[key].push_back(strs[i]);
        }

        for(auto it : m) {
            ans.push_back(it.second);
        }

        return ans;
    }
};