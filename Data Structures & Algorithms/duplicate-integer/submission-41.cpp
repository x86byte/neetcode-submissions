class Solution {
public:
    size_t idx = 500000;
    size_t ctr{};
    bool hasDuplicate(vector<int>& nums) {
        bool arr[1000001] = {0};
        int i{};
        auto d{nums.size()};
        while(d--) {
            i = nums[ctr++];
            if(arr[i + idx])
                return 1;
            arr[i + idx] = 1;
        }
        return false;
    }
};


