class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t)
    {
        for(int i = 0; i < n.size(); i++)
        {
            const int e = n[i];
            for(int j = i+1; j < n.size(); j++)
            {
                if((e + n[j]) == t)
                    return {i+1, j+1};
            }
        }
    }
};
