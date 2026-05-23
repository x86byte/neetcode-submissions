class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int m = d.size() - 1;
        for(int i = m; i >= 0; i--)
        {
            if(d[i] == 9)
                d[i]=0;
            else{
                d[i]++;
                return d;
            }
            if(i == 0)
            {
                d[i] = 1;
                d.resize(m + 2);
                d[m +1] = 0;
                return d;
            }
        }
    }
};
