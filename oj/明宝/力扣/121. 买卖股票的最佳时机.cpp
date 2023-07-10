// 121. ������Ʊ�����ʱ��

//https://www.programmercarl.com/0121.%E4%B9%B0%E5%8D%96%E8%82%A1%E7%A5%A8%E7%9A%84%E6%9C%80%E4%BD%B3%E6%97%B6%E6%9C%BA.html#%E6%80%9D%E8%B7%AF
//https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
// dp[i][0]�����i�������֧��Ʊ
// dp[i][1]�����i�첻������֧��Ʊ
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        vector<vector<int>> dp(len, vector<int>(2));
        dp[0][0] = -prices[0];
        dp[0][1] = 0;
        for(int i = 1; i<len; i++)
        {
//�����i����й�Ʊ��dp[i][0]�� ��ô����������״̬�Ƴ���
// ��i-1��ͳ��й�Ʊ����ô�ͱ�����״�������ֽ����������й�Ʊ�������ֽ� ����dp[i - 1][0]
// ��i�������Ʊ�������ֽ�����������Ĺ�Ʊ�������ֽ𼴣�-prices[i]
            dp[i][0] = max(dp[i-1][0], -prices[i]);
// �����i�첻���й�Ʊ��dp[i][1]�� Ҳ����������״̬�Ƴ���
// ��i-1��Ͳ����й�Ʊ����ô�ͱ�����״�������ֽ�������첻���й�Ʊ�������ֽ� ����dp[i - 1][1]
// ��i��������Ʊ�������ֽ���ǰ��ս����Ʊ�۸������������ֽ𼴣�prices[i] + dp[i - 1][0]
            dp[i][1] = max(dp[i-1][0]+prices[i], dp[i-1][1]);
        }
        return dp[len-1][1];
    }
};
