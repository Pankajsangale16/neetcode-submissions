class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> res;  
       for (auto& e : strs) {
        string sortedE = e;
        sort(sortedE.begin(), sortedE.end());
        res[sortedE].push_back(e);
       } 
       vector<vector<string>> result;
       for (auto& pair : res) {
        result.push_back(pair.second);
       }
       return result;
    }
};
