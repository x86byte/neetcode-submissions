class Solution {
public:

    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> sett{};
        for(auto i : nums)
            if(!sett.insert(i).second)
                return true;
        return false;
    }
};


