class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n)
    {
        unordered_set<string> ss;
        vector<vector<int>> v;
        for(int i = 0; i < n.size(); i++)
        {
            for(int j = i +1; j < n.size(); j++)
            {
                for(int d = j +1; d < n.size(); d++)
                {
                    if(!((n[i] + n[j] + n[d]) == 0))
                        continue;
                    vector<int> vv = {n[i], n[j], n[d]};
                    sort(vv.begin(), vv.end());
                    string re;
                    for(auto oo : vv)
                        re += to_string(oo) + ",";
                    if(!ss.insert(re).second)
                        continue;
                    v.push_back(vv);
                }
            }
        }
        return v;
    }
};
