/*
Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

 

Example 1:

Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]
Example 2:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
 

Constraints:

1 <= nums.length <= 8
-10 <= nums[i] <= 10

*/
    vector<vector<int>> ans;
    void get(int idx,vector<int>& nums){
        if(idx==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int i=idx;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                continue;
            }
            s.insert(nums[i]);
            swap(nums[i],nums[idx]);
            get(idx+1,nums);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        ans.clear();
        get(0,nums);
        return ans;
        