class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        set<int> s;
        sort(n.begin(), n.end());
        for(auto i : n)
            s.insert(i);
        size_t ctr =0;
        vector<int> v;
        for(auto i : s)
            v.push_back(i);
        for(int i = 0; i < v.size(); i++)
        {
            if(i+1 < v.size())
                if(v[i]+1 == v[i+1])
                    ctr++;
        }

        return ctr +1;
    }
};
