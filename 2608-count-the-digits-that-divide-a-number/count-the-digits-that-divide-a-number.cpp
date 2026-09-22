class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int copy=num;
        while(copy>0){
            int digit=copy%10;
            if (num%digit==0){
                count++;
            }
             copy=copy/10;
        }
        return count;
       
    }
};