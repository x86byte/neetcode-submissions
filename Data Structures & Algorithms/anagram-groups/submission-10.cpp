class Solution {
public:
        size_t o = 0;
    int onlyempty(vector<string>& s)
    {
        size_t ctr = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i].size() == 0)
                ctr++;
        }
        o = ctr;
        return (ctr == s.size());
    }
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>> v;
        if(onlyempty(s))
            return {s};
        const int sz = s.size();
        if(sz ==1)
            return (v.push_back({string(s[0])}), v);
        for(int i = 0; i < sz; i++)
        {
            vector<string> ts;
            string s1 = s[i];
            if(s1.size() == 0){
                continue;
            }
            ts.push_back(s1);
                sort(s1.begin(), s1.end());
            int pa = 0;
            for(int j = i + 1; j < s.size() ; j++)
            {
                pa = j - 1;
                string s2 = s[j];
                sort(s2.begin(), s2.end());
                size_t ctr =0;
                    while(s1[ctr] == s2[ctr]){
                        ctr++;
                        if(ctr == s1.size() || ctr == s2.size())
                            break;
                    }
                    
                if(ctr == s1.size() && ctr == s2.size())
                {
                    ts.push_back(s[j]);
                    s[j] = "";
                    j =pa; 
                }
            }
            v.push_back(ts);
            if(i == s.size() - 1)
                break;
        }
        vector<string> em;
            if(o)
            {
                for(int i = 0; i < o; i++)
                {
                    em.push_back("");
                }
                o = 0;
                v.push_back(em);
            }
        return v;
    }
};
