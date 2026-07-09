class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map<int,int>mpp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     mpp[nums[i]]++;
        // }
        // for(auto it: mpp)
        // {
        //     if(it.second>1)return true;
        // }
        // return false;
        unordered_set<int> seen;
        
        for (int i = 0; i < nums.size(); i++) {
            // If the number is already in our set, we found a duplicate
            if (seen.find(nums[i]) != seen.end()) {
                return true;
            }
            // Otherwise, add it to the set and keep moving
            seen.insert(nums[i]);
        }
        return false;
    }
};