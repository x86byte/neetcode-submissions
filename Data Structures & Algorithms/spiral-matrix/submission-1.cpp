class Solution {
public:
    // get fail at test case 8:
    /*
    matrix=[[2,5],[8,4],[0,-1]]
    my answer : [2,5,4,8,0]
    expected  : [2,5,4,-1,0,8]
    */
    vector<vector<int>> v;

    int dir[4][2] = {
        {0, 1},
        {1, 0},
        {0, -1},
        {-1, 0},
    };
    void t(vector<vector<int>>&g, int c, int r, vector<int> &re)
    {
        size_t cs = g[0].size();
        size_t rs = g.size();

        if(c < 0 || r < 0 || c >= cs || r >= rs)
            return;
        if(g[r][c] == -1000)
            return;
            cout << r << "," << c << endl;

        re.push_back(g[r][c]);
        g[r][c]= -1000;
        for(int i = 0; i < 4; i++)
        {
            int ro = r + dir[i][0];
            int co = c + dir[i][1];
            t(g, co, ro,re);
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& m)
    {
        vector<vector<int>> m2 = m;
        v.reserve(m.size());
        vector<int> re;
        t(m, 0, 0, re);
        return {re};
    }
};
