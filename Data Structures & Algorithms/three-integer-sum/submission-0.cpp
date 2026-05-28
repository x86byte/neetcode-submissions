class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n)
    {
        vector<vector<int>> v;
        for(int i = 0; i < n.size(); i++)
        {
            for(int j = i +1; j < n.size(); j++)
            {
                for(int d = j +1; d < n.size(); d++)
                {
                    if((n[i] + n[j] + n[d]) == 0)
                        v.push_back({n[i], n[j], n[d]});
                }
                if(v.size() == 2)
                    return v;
            }
        }
        return v;
    }
};
