class Solution {
public:

    bool hasDuplicate(vector<int>& nums) {
        auto p = [&]()
        {
            sort(nums.begin(), nums.end());
            size_t ctr  = 0;
            size_t sz = nums.size() ;
            for(auto i = 0; i <= sz - 1 ; i++)
            {
                for(int d = i + 1; d <= sz; d++)
                {
                    if(nums[d] == nums[i])
                        return true;
                }
                if(ctr == sz )
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


