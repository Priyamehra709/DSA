class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0, prefixSum = 0;
        unordered_map<int,int> m;  // prefixSum -> frequency
        
        m[0] = 1; // Important: handles case when prefixSum itself == k

        for(int i = 0; i < n; i++) {
            prefixSum += nums[i];
            
            int val = prefixSum - k;
            if(m.find(val) != m.end()) {
                count += m[val];
            }
            
            m[prefixSum]++; 
        }
        
        return count;
    }
};
