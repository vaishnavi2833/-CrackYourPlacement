class Solution {
public:
    vector<vector<string>> Anagrams(vector<string>& s) {
        int n = s.size();
        map<string, vector<string>> mpp;
        
        for (int i = 0; i < n; i++) {
            string temp = s[i];
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(s[i]);
        }
        
        vector<vector<string>> ans;
        for (auto it : mpp) {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};