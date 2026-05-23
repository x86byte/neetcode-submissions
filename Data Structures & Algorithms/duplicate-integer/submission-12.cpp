class Solution {
public:
    size_t idx = 500000;
    bool hasDuplicate(vector<int>& nums) {
        int arr[1000001] = {0};
        for(auto i : nums)
            if(arr[i + idx])
                return true;
            else
                arr[i + idx] = true;

        return false;
    }
};


