class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
         vector<int>result;
        // for(int i=0;i<n;i++)
        // {
        //     if(result.size()==0||result[0]!=nums[i])
        //     {
        //         int cnt=0;
        //         for(int j=0;j<n;j++)
        //         {
        //             if(nums[j]==nums[i])
        //             {
        //                 cnt++;
        //             }
        //         }
        //         if(cnt>n/3)
        //         {
        //             result.push_back(nums[i]);
        //         }
        //         if(result.size()==2)break;
        //     }
        // }
        // unordered_map<int,int>mpp;
        // for(int i=0;i<n;i++)
        // {
        //     mpp[nums[i]]++;
        // }
        // for(auto it:mpp)
        // {
        //     if(it.second>n/3)result.push_back(it.first);
        //     if(result.size()==2)break;
        //  }
        int cnt1=0;
        int cnt2=0;
        int element1=INT_MIN;
        int element2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(cnt1==0&&nums[i]!=element2)
            {
                cnt1=1;
                element1=nums[i];
            }
            else if(cnt2==0&&nums[i]!=element1)
            {
                cnt2=1;
                element2=nums[i];
            }
            else if(element1==nums[i])
            {
                cnt1++;
            }
            else if(element2==nums[i])
            {
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(element1==nums[i])
            {
                cnt1++;
            }
            if(element2==nums[i])
            {
                cnt2++;
            }
        }
            int mini=(int)n/3 + 1;
           // if(result.size()==2)break;
            if(cnt1>=mini)result.push_back(element1);
            if(cnt2>=mini)result.push_back(element2);
        sort(result.begin(),result.end());
                return result;
    }
};