class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int size=accounts.size();
        int maxwealth=0;
        for(int i=0;i<size;i++){
            int wealth=0;
            for(int j=0;j<accounts[i].size();j++){
                wealth+=accounts[i][j];
            }
            maxwealth=max(maxwealth,wealth);
        }
        return maxwealth;
    }
};