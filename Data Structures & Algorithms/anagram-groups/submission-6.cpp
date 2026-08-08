class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> res;

        for (auto& word : strs) {

            vector<int> count(26, 0);

            for (char c : word) {
                count[c - 'a']++;
            }

            string key;

            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + "#";
            }

            res[key].push_back(word);
        }

        vector<vector<string>> result;

        for (auto& pair : res) {
            result.push_back(pair.second);
        }

        return result;
    }
};