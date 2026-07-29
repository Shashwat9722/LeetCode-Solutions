class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size();
        for(int i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
        while(left<right)
        {
            if(!isalnum(s[left]))
            {
                left++;
                continue;
            }else if(!isalnum(s[right]))
            {
                right--;
                continue;
            }
            else
            {
                if(s[left]!=s[right])
                {
                    return false;
                }
            }
            left++;
            right--;
        }
        return true;
    }
};