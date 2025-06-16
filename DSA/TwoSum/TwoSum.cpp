class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> table;
        int second_num;
        for (int i=0; i< nums.size(); i++){
            second_num =  target - nums[i] ;
            if (table.count(second_num)){
                return {table[second_num], i};
            }
            table[nums[i]]= i;

        }
        return {};
    }
};
