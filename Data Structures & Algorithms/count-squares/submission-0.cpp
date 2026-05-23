class CountSquares {
    vector<vector<int>> points;
    size_t hc;
public:
    CountSquares()
    {
    }
    
    void add(vector<int> point)
    {
        for(auto i : point)
            cout << i;
        cout << endl;
        points.push_back(point);
    }
    int to_s(int r, int c)
    {
        for(auto rr : points)
            for(int cc = 0; cc < 1; cc++){
                if(rr[cc] == r && rr[cc + 1] == c)
                    return 1;
            }
        return 0;
    }
    int count(vector<int> point)
    {
        size_t r = point[0];
        size_t c = point[1];
        if(to_s(r, c))
            return 2;

        add(point);
        size_t rs = points.size();
        size_t cs = points[0].size();
        size_t ctr =0;
        for(int rr = r; rr < rs; rr++)
        {
            for(int cc = c; cc <= cs; cc++)
            {
                if(rr <0 || cc < 0 || rr > rs || cc > cs)
                    return 0;
                if(to_s(rr-1,cc))
                    ctr++;
                else if(to_s(rr+1,cc))
                    ctr++;
                if(ctr == 2)
                    return 1;
            }
        }
        return 0;
    };
};


