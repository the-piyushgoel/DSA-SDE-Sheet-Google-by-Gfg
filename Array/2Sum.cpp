#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        int i,j,flag=0;
        for(i=0;i<size;i++){
            for(j=i+1;j<size;j++){
                if(nums[i]+nums[j]==target){
                    flag=1;
                    break;
                    }
                else 
                    continue;
            }
            if (flag==1){
                break;
            }
            else continue;
        }
      return{i,j};  
    }

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
        if(m[target - nums[i]]){
            return {m[target - nums[i]] - 1, i};
        }
        m[nums[i]] = i;
    }
    return {};
}

vector<int> twoSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int i=0, j=nums.size()-1;
    while(i<j){
        int sum = nums[i] + nums[j];
        if(sum == target){
            return {i, j};
        }
        else if(sum < target){
            i++;
        }
        else{
            j--;
        }
    }
    return {};
}