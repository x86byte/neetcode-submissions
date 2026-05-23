class Solution {
public:

    int* getSecondMaxAddr(std::vector<int>& arr) {
        auto itMax = std::max_element(arr.begin(), arr.end());
        int maxVal = *itMax;

        int* result = nullptr;
        int best = INT_MIN;

        for (int& x : arr) {
            if (x < maxVal && x > best) {
                best = x;
                result = &x;
            }
        }
        if(result)
            return result;
        return 0;
    }
    int he_is = 0;
    int check_same(vector<int>& s)
    {
        int ctr = 0;
        for(int i = 0; i < s.size(); i++)
            for(int j = i + 1; j < s.size(); j++)
                if(s[i] == s[j])
                    ctr++;
        return ctr;
    }
    int checker(vector<int>& s)
    {
        int sz = check_same(s);
        set<int> p;
        for(auto i : s)
            p.insert(i);
        
        if(p.size() == 1 && sz > 1)
        {
            return(he_is = 1);
        }

        if(p.size() == 1){
            return 0;
        }
        return 1;
    }
    int lastStoneWeight(vector<int>& s) 
    {
            if(s.size() == 1)
            {
                return s[0];
            }
        priority_queue<int> h;
        for(auto i : s)
            h.push(i);
        while(h.size() > 1)
        {
            int max = h.top();
            h.pop();
            int min = h.top();
            h.pop();
                if(max > min)
                {
                    h.push(max-min);
                }
        }
        return h.empty() ? 0 : h.top();
    }
};
