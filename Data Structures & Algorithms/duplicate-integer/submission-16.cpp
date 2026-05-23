class Solution {
public:
    size_t idx = 500000;
    size_t ctr{};
    bool hasDuplicate(vector<int>& nums) {
        short arr[1000001] = {0};
        int i = 0;
        while(ctr < (nums.size()))
        {
            i = nums[ctr++];
            if(arr[i + idx])
                return true;
            else
                arr[i + idx] = true;
        }
        return false;
    }
};


