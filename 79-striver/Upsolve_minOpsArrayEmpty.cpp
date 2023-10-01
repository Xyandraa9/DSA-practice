class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        int count = 0;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second == 1) return -1;
            count += ceil((i.second)/(3*1.0));
        }
        return count;
    }
};
