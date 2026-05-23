class Solution {
public:
    size_t idx = 500000;
    size_t ctr{};
    bool hasDuplicate(vector<int>& nums) {
        short arr[1000001] = {0};
        int i{};
        int d{nums.size()};
        while(d)
        {
            if(arr[(nums[ctr] + idx)])
                return true;
            else
                arr[(nums[ctr] + idx)] = true;
            d--;
            ctr++;
        }
        return false;
    }
};


