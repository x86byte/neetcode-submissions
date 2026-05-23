class Solution {
public:
    size_t idx = 500000;
    size_t ctr{};
    bool hasDuplicate(vector<int>& nums) {
        short arr[1000001] = {0};
        int i{};
        auto d{nums.size()};
        if(!d)
            return false;
        do {
            i = nums[ctr++];
            if(arr[i + idx])
                return 1;
            arr[i + idx] = 1;
        } while(d--);
        return false;
    }
};


