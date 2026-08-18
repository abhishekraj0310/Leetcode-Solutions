class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>subarray;
        for(int i=0;i<=n-k;++i)
        {
            unordered_set<int>unique;
            for(int j=i;j<i+k;++j)
            {
                unique.insert(nums[j]);
            }
            for(int val:unique)
            {
                subarray[val]++;
            }
        }
        int max_val=-1;
        for(const auto&[val,count]:subarray)
        {
            if(count==1)
            {
                max_val=max(max_val,val);
            }
        }
        return max_val;
    }
};
