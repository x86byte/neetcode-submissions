class Solution {
public:
    int checker(vector<vector<int>> v, int i, int j, int d)
    {
        int ii = 0;
        int jj = 0;
        int dd = 0;
        for(auto vv : v)
        {
            for(int o = 0; o < vv.size(); o++)
            {
                if(vv[o] == i)
                    ii = 1;
                if(vv[o] == j)
                    jj = 1;
                if(vv[o] == d)
                    dd = 1;
            }
            if(ii && dd && jj)
                return 1;
            else
            {
                ii, jj, dd =0;
            }
        }
        if(ii && dd && jj)
            return 1;
        return 0;
    }
    vector<vector<int>> threeSum(vector<int>& n)
    {
        vector<vector<int>> v;
        for(int i = 0; i < n.size(); i++)
        {
            for(int j = i +1; j < n.size(); j++)
            {
                for(int d = j +1; d < n.size(); d++)
                {
                    if((n[i] + n[j] + n[d]) == 0 && !checker(v, n[i], n[j], n[d]))
                        v.push_back({n[i], n[j], n[d]});
                }

            }
        }
        return v;
    }
};
