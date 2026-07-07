class Solution {
public:
    // vector<int> searchRange(vector<int>& nums, int target) {
    //     int n=nums.size();
    //     vector<int>temp;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(nums[i]==target)
    //         {
    //             temp.push_back(i);
    //         }
    //     }
    //     for(int i=0;i<temp.size();i++)
    //     {
    //         return{temp[i],temp[temp.size()-1]};
    //     }
    //     return {-1,-1};
    // }
    int firstvector(vector<int>& nums,int target)
{
    int l=0;
    int r=nums.size()-1;
    int first=-1;
    int mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(nums[mid]==target)
        {
            first=mid;
            r=mid-1;
        }
        else if(target>nums[mid])
        l=mid+1;
        else
        r=mid-1;
    }
    return first;
}
int findlast(vector<int>& nums,int target)
{
    int last=-1;
    int l=0;int r=nums.size()-1;
    int mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(nums[mid]==target)
        {
            last=mid;
            l=mid+1;
        }
          else if(target>nums[mid])
        l=mid+1;
        else
        r=mid-1;
    }
    return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
       
       int first=firstvector(nums,target);
       int last=findlast(nums,target);
       return{first,last};
    }
};