class Solution {
public:
void reverse(vector<int>& nums,int l,int r)
{
    while(l<=r)
    {
        int temp=nums[l];
        nums[l]=nums[r];
        nums[r]=temp;
        l++;
        r--;
    }
}
    vector<int> rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)return nums;
        k=k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        return nums;
    }
};