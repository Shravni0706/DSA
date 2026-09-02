class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        int num1=n;
        int num2=n;
       while(num1!=0)
       {
        product*=num1%10;
        num1/=10;
       }
       while(num2!=0)
       {
        sum+=num2%10;
        num2/=10;
       }
        
       
        int difference= product-sum;
        return difference;

    }
};