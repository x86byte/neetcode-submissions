class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>  res;
        unordered_map<string, vector<string>> m;
        for(auto p : strs){
            string p2 = p;
            sort(p2.begin(), p2.end());
            m[p2].push_back(p);  
        }
            
        for(auto [f, se] : m){
            cout << f;
            res.push_back(se);
            cout << endl;
        }
        return res;
    }
};
