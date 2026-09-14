class Solution {
public:
    int missingNumber(vector<int>& nums) {
       long size= nums.size();
        long sum=0;
        long actual_size=(size*(size+1))/2;
        for(int i=0;i<size;i++){
            sum+=nums[i];
        }
        return (actual_size-sum);
    }
};