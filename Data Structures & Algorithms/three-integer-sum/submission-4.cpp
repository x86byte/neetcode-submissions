class Solution {
public:
    int checker(vector<vector<int>> v, vector<int> tt)
    {
        for(auto vv : v)
        {
            sort(vv.begin(), vv.end());
            for(int o = 0; o < vv.size(); o++)
            {
                if(vv[o] == tt[o]){
                    for(int p = o + 1; p < vv.size(); p++)
                    {
                        if(vv[p] == tt[p])
                            for(int b = p +1 ; b < vv.size(); b++)
                            {
                                if(vv[b] == tt[b])
                                    return 1;
                            }
                    }
                }
            }
        }

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
                    vector<int> vv = {n[i], n[j], n[d]};
                    sort(vv.begin(), vv.end());
                    if((n[i] + n[j] + n[d]) == 0 && !checker(v,vv))
                        v.push_back(vv);
                }
            }
        }
        return v;
    }
};
