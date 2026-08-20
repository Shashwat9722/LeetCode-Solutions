class Solution {
public:
    bool isSubsequence(string s, string t) {
        int right=0;
        int left=0;
        while(right<t.size())
        {
            if(left>=s.size())
            {
                return true;
            }
            if(s[left]==t[right])
            {
                left++;
            }
            right++;
        }
        if(left>=s.size())
        {
            return true;
        }
        return false;
    }
};