class Solution {
public:
    void setZeroes(vector<vector<int>>& m)
    {
        int rs = m.size();
        int cs = m[0].size();

        vector<int> rows;
        vector<int> cols;
        // find z
        for(int r = 0; r < rs; r++)
        {
            for(int c = 0; c < cs; c++)
            {
                if(m[r][c] == 0)
                {
                    rows.push_back(r);
                    cols.push_back(c);
                }
            }
        }

        // zeroing
        for(auto r : rows)
        {
            for(int c = 0; c < cs; c++)
            {
                m[r][c] = 0;
            }
        }
        for(auto c : cols)
        {
            for(int r = 0; r < rs; r++)
            {
                m[r][c] = 0;
            }
        }
    };
};
