class Solution {
public:

    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<int> sett{};
        if(nums.size() > 2 && nums.at(0) == nums.at(1))
            return true;
        for(auto i : nums)
            if(!sett.insert(i).second)
                return true;
        return false;
    }
};


