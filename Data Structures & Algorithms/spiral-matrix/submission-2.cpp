class Solution {
public:
    // 12 / 25:
    /*
        - matrix    = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
        - my answer : [1,2,3,4,8,12,16,15,14,13,9,10,11,7,6,5]
        - expected  : [1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10]
    */
    vector<vector<int>> v;

    int dir[4][2] = {

        {0, 1},
        {1, 0},
        {0, -1},
        {-1, 0},

    };
    void t(vector<vector<int>>&g, int c, int r, vector<int> &re, int d)
    {
        size_t cs = g[0].size();
        size_t rs = g.size();
        size_t f = 0;

        re.push_back(g[r][c]);
        g[r][c] = -13;

        int ro = r + dir[d][0];
        int co = c + dir[d][1];
    
        if(co < 0 || ro < 0 || co >= cs || ro >= rs)
            f = 1;
        else if(g[ro][co] == -13)
            f =1;

        // to debug, xD
        cout << r << "," << c << endl;

        if(f)
        {
                d = (d + 1) % 4;
                ro = r + dir[d][0];
                co = c + dir[d][1];
        }
        if(co < 0 || ro < 0 || co >= cs || ro >= rs)
            return ;
        else if(g[ro][co] == -13)
            return;
        t(g, co, ro,re, d);
    }
    vector<int> spiralOrder(vector<vector<int>>& m)
    {
        vector<vector<int>> m2 = m;
        v.reserve(m.size());
        vector<int> re;
        t(m, 0, 0, re, 0);
        return {re};
    }
};
