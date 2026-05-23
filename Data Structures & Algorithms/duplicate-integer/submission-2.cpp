class Solution {
public:

    bool hasDuplicate(vector<int>& nums) {
        auto p = [&]()
        {
            size_t ctr  = 0;
            for(auto i = 0; i <= nums.size() - 1 ; i++)
            {
                for(int d = i + 1; d <= nums.size(); d++)
                {
                    if(nums[d] == nums[i])
                        return true;
                }
                if(ctr == nums.size())
                    break;
                ctr++;
            }
            return false;
        };
        if(p())
            return true;
        return false;
    }
};


