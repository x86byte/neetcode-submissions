class Solution {
public:

    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<int> sett{};
        for(auto i : nums)
            if(!sett.insert(i).second)
                return true;
        return false;
    }
};


