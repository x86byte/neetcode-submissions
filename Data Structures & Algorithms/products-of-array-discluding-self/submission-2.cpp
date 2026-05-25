class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n)
    {
            vector<int> re;
            for(int  i= 0; i < n.size(); i++)
            {
                size_t res = 1;
                int cur = n[i];
                for(int  j= 0; j < n.size(); j++)
                {
                    if(cur == n[j])
                        continue;
                    res = res * n[j];
                }
                re.push_back(res);
            }
            return re;
    }
};
