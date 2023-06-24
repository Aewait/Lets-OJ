//1049. ���һ��ʯͷ������ II
//https://leetcode.cn/problems/last-stone-weight-ii/description/
// https://www.programmercarl.com/1049.%E6%9C%80%E5%90%8E%E4%B8%80%E5%9D%97%E7%9F%B3%E5%A4%B4%E7%9A%84%E9%87%8D%E9%87%8FII.html#%E6%80%9D%E8%B7%AF

class Solution {
public:
// 01����
// ���dp[target]��������Ϊtarget�ı������ܱ������������
// ��ô�ֳ�����ʯͷ��һ��ʯͷ����������dp[target]����һ�Ѿ���sum - dp[target]��
// �ڼ���target��ʱ��target = sum / 2 ��Ϊ������ȡ��������sum - dp[target] һ���Ǵ��ڵ���dp[target]�ġ�
// ��ô��ײ֮��ʣ�µ���Сʯͷ�������� (sum - dp[target]) - dp[target]��
    int lastStoneWeightII(vector<int>& stones) {
        int sum = 0;
        for(int i = 0; i<stones.size(); i++)
            sum+=stones[i];

        int target = sum/2;
        vector<int> dp(1501, 0);
        for(int i = 0; i<stones.size(); i++)
        {
            for(int j = target; j>=stones[i]; j--)
            {
                dp[j] = max(dp[j], dp[j-stones[i]]+stones[i]);
            }
        }

        return sum-2*dp[target];
    }
};
