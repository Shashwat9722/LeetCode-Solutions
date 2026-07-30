class Solution {
public:
    int minimumPushes(string word) {
        int count=0;
        for(int i=0; i<word.size(); i++){
            if(i<=7){
                count++;
            }else if(i>7&&i<=15){
                count+=2;
            }else if(i>15&&i<=23){
                count+=3;
            }else{
                count+=4;
            }
        }
        return count;
    }
};