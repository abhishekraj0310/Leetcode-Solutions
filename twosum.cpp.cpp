#include<iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        vector<pair<int, int>> temp;
        for (int i = 0; i < n; i++) {
            temp.push_back({nums[i], i});
    
        sort(temp.begin(), temp.end());

        int left = 0;
        int right = n - 1;

        while (left < right) {
            int sum = temp[left].first + temp[right].first;

            if (sum == target) {
               
                return {temp[left].second, temp[right].second};
            } 
            else if (sum < target) {
               
                left++;
            } 
            else {
               
                right--;
            }
        }

        return {};
    }
};