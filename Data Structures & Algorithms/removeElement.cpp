class Solution {
public:
    int removeElement(vector<int>& n, int v)
    {
        for(auto i = n.begin(); i<n.end();)
        {
            if(*i == v){
                n.erase(i);
                i = n.begin();
                if(n.size() == 1)
                    if(n[0] == v)
                    {
                        n.erase(n.begin());
                        return 0;
                    }
                continue;
            }
            i++;
        }
        return n.size();
    }
};
