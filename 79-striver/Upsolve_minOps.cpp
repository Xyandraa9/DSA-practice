class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        unordered_set<int> v;

        int n = nums.size();
        for(int i = n-1; i >= 0; i--){
            count++;
            if(nums[i] <= k){
                v.insert(nums[i]);
            }
            if(v.size() == k){
                return count;
            }
        }
        return -1;
    }
};
