class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> f;

        for (int x : nums)
            f[x]++;

        for (auto it = nums.begin(); it != nums.end(); )
        {
            if (f[*it] > 1) {
                it = nums.erase(it);
                f[*it]--;
            } else {
                ++it;
            }
        }
        return nums.size();
    }
};
