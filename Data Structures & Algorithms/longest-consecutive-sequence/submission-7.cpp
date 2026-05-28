class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        if(!n.size())
            return 0;
        set<int> s;
        for(auto i : n)
            s.insert(i);
        size_t ctr =1;
        vector<int> v;
        for(auto i : s)
            v.push_back(i);
        sort(v.begin(), v.end());
        int m = 1;
        for(int i = 0; i < v.size(); i++)
        {
            if(i+1 < v.size()){
                if(v[i]+1 == v[i+1])
                {
                    ctr++;
                } else {
                    if(m < ctr)
                        m = ctr;
                    ctr = 1;
                }
            }
        }
        if(m > ctr)
            return m;
        return ctr;
    }
};
