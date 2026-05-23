class Solution {
public:
    vector<int> twoSum(vector<int>& n, const int t) {
        const short sz  = n.size();
        for(int i = 0; i < sz; i++)
            for(int j = i + 1; j < sz; j++)
                if(n[i] + n[j] == t)
                    return {i, j};
        return {};
    }
};
