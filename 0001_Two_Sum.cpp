class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        //sort(nums.begin(),nums.end());
    //     int i,j;
    //     for( i=0;i<n+1;i++) 
    //     {                                                                                                  
    //         // for( j=i+1;j<n;j++)
    //         // {
    //         //     if(nums[i]+nums[j]==target)
    //         //     {
    //         //          return {i,j};
    //         //     }
    //         // }
    //         j=i+1;// BRUTE FORCE METHOD
    //         if(nums[i]+nums[j]==target)
    //         {
    //             return {i,j};
    //         }
    //         else
    //         j++;
    //     }
    //    return {};
    // map<int,int>mpp;
    // for(int i=0;i<n;i++)
    // {
    //     int a=nums[i];
    //     int more=target-a;
    //     if(mpp.find(more)!=mpp.end())// Better Approach
    //     {
    //         return{mpp[more],i};
    //     }
    //     mpp[a]=i;
    // }
    // return {};
    //  }
    vector<pair<int, int>> temp;
        for (int i = 0; i < n; i++) {
            temp.push_back({nums[i], i});}
            sort(temp.begin(), temp.end());
    int left=0;
    int right=n-1;
       while(left<right)
    {
       int sum = temp[left].first + temp[right].first;
              if(sum==target)
       {
       return{left,right};
       }
       else if(sum<target)
       {
        left++;
       }
       else 
       right--;
    }
    return {};
    }
};