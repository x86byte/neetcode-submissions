class Solution {
public:
    size_t idx = 500000;
    bool hasDuplicate(vector<int>& nums) {
        size_t arr[1000001] = {0};
        for(auto i : nums)
            if(arr[i + idx])
                return true;
            else
                arr[i + idx] = true;

        return false;
    }
};


