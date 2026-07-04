class Solution {
public:
    int maximumCount(vector<int>& nums) {
        // int countp=0;
        // int countn=0;
        // int maxcount=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]>0&&nums[i]!=0)
        //     {
        //         countp++;
        //         maxcount=max(countp,maxcount);
        //     }
        //     else if(nums[i]<0&&nums[i]!=0)
        //     {
        //         countn++;
        //         maxcount=max(countn,maxcount);
        //     }
        //     else
        //     {
        //         continue;
        //     }
        // }
        // return maxcount;
        int lo=0;
        int hi=nums.size()-1;
        int negcount=0;
        int poscount=0;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>=0) hi=mid-1;
            else{
                lo=mid+1;
            }
            negcount=lo;
        }
         lo=0;
         hi=nums.size()-1;
         while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]<=0) lo=mid+1;
            else{
                hi=mid-1;
            }
            poscount=nums.size()-lo;
        }
        return max(negcount,poscount);
    }
};