class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t)
    {
        for(int i = 0; i < n.size(); i++)
        {
            int e = n[i];
            for(int j = i+1; j < n.size(); j++)
            {
                if((e + n[j]) == t)
                {
                    if(e-1 <= 1 && n[j] - 1 <= 1)
                        return {e, n[j]};
                    return {e-1, n[j]-1};
                }
            }
        }
    }
};
