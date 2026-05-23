class CountSquares {
    vector<vector<int>> points;
    size_t hc;
    vector<int> m;
public:
    CountSquares()
    {
    }
    
    void add(vector<int> point)
    {
        m.push_back(point[0]);
        for(auto i : point)
            cout << i;
        cout << endl;
        points.push_back(point);
    }
    int to_s(int r, int c)
    {
        for(auto rr : points)
            for(int cc = 0; cc < 1; cc++){
                if(rr[cc] == r && rr[cc + 1] == c){
                            cout << "kaina : " << rr[cc]<< " and " << rr[cc + 1] << endl;
                    return 1;
                }
            }
        return 0;
    }
    int count(vector<int> point)
    {
        size_t r = point[0];
        size_t c = point[1];
        cout << "count is : " << r << " and " << c << endl;
        int max = *max_element(m.begin(), m.end());
        if(to_s(r, c))
            return 2;

        add(point);
        size_t rs = points.size();
        size_t cs = points[0].size();
        size_t ctr =0;
        int into =0;
        for(int rr = 0; rr < rs; rr++)
        {
            for(int cc = 0; cc <= cs; cc++)
            {
                if(r <  0|| c < 0)
                    return 0;
                size_t rb = r;
                while(r >= max)
                {
                    cout << "testing1 : " << r << " " << c << endl;
                    if(r <  0)
                        break;
                    if(to_s(r-1,c)){
                        ctr++;
                        break;
                    }
                    r--;
                }
                r = rb;
                while(r <= max)
                {
                    cout << "testing2 : " << r << " " << c << endl;
                    if(to_s(r,c)){
                        ctr++;
                        r = rb;
                        break;
                    }
                    if(ctr == 2)
                        return 1;
                    if(r > rb)
                        break;
                    r++;
                }
                r = rb;
                if(ctr == 2)
                    return 1;
            }
        }
        return 0;
    };
};


