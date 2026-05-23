class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
    	sort(nums.begin(), nums.end()); 
        vector<int> arr;
        vector<vector<int>> vv;
        vv.push_back(nums);
        for(auto &n : nums)
            arr.push_back(n);
        while(next_permutation(arr.begin(), arr.end()))
        {
            vv.push_back(arr);
        }
        return vv;
    }
};
