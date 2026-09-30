class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        vector<int> fibonacci(n+1);
       fibonacci[1]=1;
       fibonacci[2]=2;
        
        for(int i=3; i<n+1;i++){
            fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        }
        return fibonacci[n];
        
    }
};