class Solution {
public:

    string encode(vector<string>& strs) {

        string result = "";

        for (string str : strs) {
            result += to_string(str.length()) + '#' + str;
        }

        return result;
    }   
    vector<string> decode(string s) {
        vector<string>ans;
        int i=0; 
        while(i < s.size()) {
            int j = i;

            while(s[j] != '#') {
                j++;
            }

            int num = stoi(s.substr(i, j - i));

            string subStr = s.substr(j + 1, num );

            ans.push_back(subStr);

            i = num + 1 + j;
        }

        return ans;
    }
};
