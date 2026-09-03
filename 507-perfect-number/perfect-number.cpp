class Solution {
public:
    bool checkPerfectNumber(int num) {
        int size= num/2;
        vector <int> divisors;
        int sum=0;
        for (int i =1;i<=num/2;i++){
            if (num%i==0){
                divisors.push_back(i);
            }
        }
        for(int j=0;j<divisors.size();j++){
            sum+=divisors[j];
        }
        if(sum==num){
            return true;
        }

        return false;
    }
};