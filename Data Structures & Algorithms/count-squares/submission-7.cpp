class CountSquares {
    vector<pair<int, int>> points;
    unordered_map<string,int> f;
    vector<int> m;
public:
    CountSquares()
    {
    }
    
    void add(vector<int> point)
    {
        int r = point[0];
        int c = point[1];
        f[to_string(r)+","+to_string(c)]++;
        points.push_back({r, c});
    }
    int count(vector<int> point)
    {
        int res = 0;
        int r = point[0];
        int c = point[1];
        for(auto [d, s] : points)
        {
            if(r == d)
                continue;
            if(abs(d - r) != abs(s - c))
                continue;
            res += f[to_string(r)+","+to_string(s)] * f[to_string(c)+","+to_string(d)];
        }
        return res;
    };
};


