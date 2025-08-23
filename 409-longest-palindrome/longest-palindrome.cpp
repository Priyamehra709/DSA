class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(char c:s) mp[c]++;
        int ans=0,odd=0;
        for(auto [c,f]:mp){
            ans+=f/2*2;
            if(f%2)odd=1;
        }
        return ans+odd;
    }
};