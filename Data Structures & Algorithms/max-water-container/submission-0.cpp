class Solution {
public:
    int maxArea(vector<int>& h)
    {
        int  s = 0;
        int e= h.size()-1;
        int m = 0;
        while(s<e)
        {
            m = max(m, (min(h[s], h[e]) * (e - s)));
            if(h[e] > h[s])
                s++;
            else
                e--; 
        }
        return m;
    }
};
