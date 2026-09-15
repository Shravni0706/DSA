class Solution {
public:
    void reverse(vector<int>&nums,int left,int right){
        while(left<right){
            swap (nums[left],nums[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        if (size<=1) return;
        k=k%size;
        reverse(nums,0,size-1);
        reverse(nums,0,k-1);
        reverse(nums,k,size-1);
    }
};