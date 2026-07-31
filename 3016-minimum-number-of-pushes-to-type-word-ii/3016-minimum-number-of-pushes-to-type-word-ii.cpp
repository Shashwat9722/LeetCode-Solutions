class Solution {
public:
    int minimumPushes(string word) {
        int arr[26]={0};
        for(char c: word)
        {
            arr[c-'a']++;
        }
        sort(arr,arr+26,greater<int>());
        int count=0;
        for(int i=0; i<26; i++)
        {
            if(i<=7)
            {
                count+=arr[i];
            }
            else if(i>7 && i<=15)
            {
                count+=arr[i]*2;
            }
            else if(i>15 && i<=23)
            {
                count +=arr[i]*3;
            }
            else
            {
                count+=arr[i]*4;
            }
        }
        return count;

    }
};