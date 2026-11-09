class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> no_duplicates;
        for(auto num: nums) {
            no_duplicates.insert(num);
        }

        return no_duplicates.size() < nums.size();
    }
};