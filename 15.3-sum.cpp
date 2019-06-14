/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> solution;
        for(int i = 0; i < nums.size() - 2; i++){
            for(int j = i + 1; j < nums.size() - 1; i++){
                for(int k = j + 1; k < nums.size(); k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        std::cout << i << j << k << "|";
                        vector<int> add;
                        add.push_back(nums[i]);
                        add.push_back(nums[j]);
                        add.push_back(nums[k]);
                        solution.push_back(add);
                    }
                }
            }
        }
        return solution;
    }
};

