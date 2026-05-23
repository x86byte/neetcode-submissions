class Solution {
public:
    size_t idx = 500000;
    size_t ctr{};
    bool hasDuplicate(vector<int>& nums) {
        short arr[1000001] = {0};
        int i{};
        int d{nums.size()};
        if(!d)
            return false;
        while(d)
        {
            i = nums[ctr++];
            if(arr[i + idx])
                return true;
            else
                arr[i + idx] = true;
            d--;
        }
        return false;
    }
};


