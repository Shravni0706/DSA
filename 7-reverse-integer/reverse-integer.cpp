class Solution {
public:
    int reverse(int x) {
        int final=0;
    while(x!=0){
        if (final>INT_MAX/10||final<INT_MIN/10){
            return 0;
        }
        final=(final*10)+(x%10);
        x/=10;
    }
    return final;
    }
};