// 188. ������Ʊ�����ʱ�� IV
//https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-iv/description/
//https://www.programmercarl.com/0188.%E4%B9%B0%E5%8D%96%E8%82%A1%E7%A5%A8%E7%9A%84%E6%9C%80%E4%BD%B3%E6%97%B6%E6%9C%BAIV.html#%E6%80%9D%E8%B7%AF
//ǰ�����⣺ 
//// dp[i][j]�� i��ʾ��i�죬jΪ [1 - 4] �ĸ�״̬��dp[i][j]��ʾ��i��״̬j��ʣ����ֽ�
//// ����4��״̬
//// ��һ�γ��й�Ʊ  1
//// ��һ�β����й�Ʊ 2
//// �ڶ��γ��й�Ʊ   3
//// �ڶ��β����й�Ʊ  4
//    int maxProfit(vector<int>& prices) {
//        vector<vector<int>>dp (prices.size(), vector<int>(5, 0));
//        dp[0][1] = -prices[0];
//        dp[0][3] = -prices[0];
//        for(int i = 1; i<prices.size(); i++)
//        {
//            dp[i][1] = max(dp[i-1][1], 0-prices[i]);
//            dp[i][2] = max(dp[i-1][2], dp[i-1][1]+prices[i]);
//            dp[i][3] = max(dp[i-1][3], dp[i-1][2]-prices[i]);
//            dp[i][4] = max(dp[i-1][4], dp[i-1][3]+prices[i]);
//        }
//        return dp[prices.size()-1][4];
//    }
class Solution {
public:
// ������⣺https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-iii/description/
// 0 ��ʾ������
// 1 ��һ������
// 2 ��һ������
// 3 �ڶ�������
// 4 �ڶ�������
// .....
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<int>>dp (prices.size(), vector<int>(k*2+1, 0));
        for(int i = 1; i<2*k; i+=2)
            dp[0][i] = -prices[0];
        for(int i = 1; i<prices.size(); i++)
        {
            for(int j = 0; j<k*2-1; j+=2)
            {
                dp[i][j+1] = max(dp[i-1][j+1], dp[i-1][j]-prices[i]);
                dp[i][j+2] = max(dp[i-1][j+2], dp[i-1][j+1]+prices[i]);
            }
        }
        return dp[prices.size()-1][k*2];
    }
};
