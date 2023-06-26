//518. ��Ǯ�һ� II

//https://leetcode.cn/problems/coin-change-ii/description/
// https://www.programmercarl.com/0518.%E9%9B%B6%E9%92%B1%E5%85%91%E6%8D%A2II.html#%E6%80%9D%E8%B7%AF
class Solution {
public:
// ��Ϊÿ������Ӳ�������޸�����������ȫ��������
// �����������������forѭ��������Ʒ���ڲ�for����������
// ������������������for�����������ڲ�forѭ��������Ʒ��

//https://www.bilibili.com/video/BV1KM411k75j/?vd_source=3ad2a62940718859702ce089b46d5288
// bվ��Ƶ�����������ȱ�����Ʒ��������������������磬���ѭ���̶�coins��1�������ڲ�ѭ����������ʱ�����ű����������ӣ�coins��1�������ظ�����ӽ��������������ѭ���̶��ˣ�
//���coins��2��ֻ������һ�����ѭ����ӽ���ͬ��С�ı����У���ô���Ļ���coins��i+1��ֻ����coins��i��֮���ˣ�
//����ȱ��������������Ʒ����ô���ѭ���ȹ̶�������Сj��Ȼ���ڴ�СΪj�ı�����ѭ�����������Ʒ��Ȼ�����´����ѭ��������С��Ϊj+1��
//��ʱ��Ҫִ���ڲ�ѭ�����������Ʒ��Ҳ�ͻ��������һ�����ѭ�������coins��2���Ļ����ϻ��������coins��1�����������ô������coins��1����coins��2��֮�������ˡ�

// dp[i]��ʾ�ܽ��Ϊi�����з���
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1, 0);
        dp[0] = 1;
        for(int i = 0; i<coins.size(); i++)// ������Ʒ
        {
            for(int j = coins[i]; j<=amount; j++)// ������������
            {
                dp[j] += dp[j-coins[i]];
            }
            // for(int k = 0; k<amount+1; k++)
            //     cout<<dp[k]<<" ";
            // cout<<endl;
        }
        // for (int j = 0; j <= amount; j++) { // ������������
        //     for (int i = 0; i < coins.size(); i++) { // ������Ʒ
        //         if (j - coins[i] >= 0) dp[j] += dp[j - coins[i]];
        //     }
        //     for(int k = 0; k<amount+1; k++)
        //         cout<<dp[k]<<" ";
        //     cout<<endl;
        // }
        return dp[amount];
    }
};
