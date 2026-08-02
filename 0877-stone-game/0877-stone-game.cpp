class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int ev=0;
        int od=0;
        for(int i=0; i<piles.size()-1;i+=2)
        {
            ev+=piles[i];
            od+=piles[i+1];
        }
        int left=0;
        int right=piles.size()-1;
        int p1=0;
        int p2=0;
        if(ev>od)
        {
            while(left<=right)
            {
                if(left%2==0)
                {
                    p1+=piles[left];
                    left++;
                }
                else
                {
                    p1+=piles[right];
                    right--;
                }
                if(left%2!=0)
                {
                    p2+=piles[left];
                    left++;
                }
                else
                {
                    p2+=piles[right];
                    right--;
                }
            }
        }
        else
        {
            while(left<=right)
            {
                if(left%2!=0)
                {
                    p1+=piles[left];
                    left++;
                }
                else
                {
                    p1+=piles[right];
                    right--;
                }
                if(left%2==0)
                {
                    p2+=piles[left];
                    left++;
                }
                else
                {
                    p2+=piles[right];
                    right--;
                }
            }
        }
        if(p1>p2)
        {
            return true;
        }
        return false;
    }
};