class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int ms = m.size();
        int cs = m[0].size();
        vector<vector<int>> j;
        int f  = 0;
        for(int i = 0; i < ms; i++)
        {
            int d  = ms-1;
            vector<int> v;
            while(d >= 0)
            {
                v.push_back(m[d][i]);
                d--;
            }
            f++;
            j.push_back(v);
        }
        for(int i = 0; i<ms; i++){
            for(int ii = 0; ii < cs; ii++)
            {
                m[i][ii] = j[i][ii];
            }
        }
    }
};
