class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k)
    {
 /*       set<int> v;
        vector<int> vv;
        vector<int> nv;
        unordered_map<int, int> m;
        //v.reserve(k);
        for(auto i : n){
            m[i] = count(n.begin(), n.end(), i);
        }

        for(int i = 0; i < n.size(); i++)
        {
            int max = n[0];
                if (m[n[i]] > m[n[i + 1]]) {
                    cout << m[n[i]] << "  " << m[n[i + 1]]<<endl;
                    max = n[i];
                    nv.push_back(max);
                    m[n[i]] = 0;
                    if(nv.size() == k)
                        return nv;
                }
        }
        for(auto [i, v] : m)
            cout << i << "    " << v <<endl;
        
 

        size_t ctr  =0;
        int fq[100] = {};
        for(int i = 0; i < n.size(); i++)
        {
            int d= n[i];
            for(int j = 0; j < n.size(); j++)
                if(n[j]== d)
                    ctr++;
            fq[ctr] = d;
        }

        */

        unordered_map<int, int> counts;
        for (int num : n) {
            counts[num]++;
        }
        vector<pair<int, int>> freq_vec(counts.begin(), counts.end());

        sort(freq_vec.begin(), freq_vec.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.second > b.second; 
        });

        vector<int> r;

        size_t ctr =0;
        for(auto i : freq_vec)
        {
            if(ctr==k)
                return r;
            r.push_back(i.first);
            ctr++;
        }

        return {r};
    }
};
