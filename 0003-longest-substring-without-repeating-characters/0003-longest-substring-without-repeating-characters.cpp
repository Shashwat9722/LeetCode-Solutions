class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int left=0; 
        int right=0;
        int len=0;
        while(right<s.size())
        {
            mp[s[right]]++;
            while(mp[s[right]]>1)
            {
                mp[s[left]]--;
                left++;
            }
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};