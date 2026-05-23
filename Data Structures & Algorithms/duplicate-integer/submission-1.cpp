class Solution {
public:

    int cmp(vector<int>& nums)
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
    }
    bool hasDuplicate(vector<int>& nums) {
        if(cmp(nums))
            return true;
        return false;
    }
};

