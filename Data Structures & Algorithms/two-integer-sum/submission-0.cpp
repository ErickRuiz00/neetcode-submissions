class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> diff_index = {};        

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (diff_index.contains(diff)) {
                return {diff_index[diff], i};
            }
            diff_index[nums[i]] = i;
        }
    }
};
