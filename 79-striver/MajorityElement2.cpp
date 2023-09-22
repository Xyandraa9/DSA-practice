class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;
        int n = nums.size();
        int m = n/3;
        for(int i = 0; i < n; i++){
            mp[i] = 0;
        }

        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        for(auto num: mp){
            if(num.second > m) ans.push_back(num.first);
        }
        return ans;
    }
};
