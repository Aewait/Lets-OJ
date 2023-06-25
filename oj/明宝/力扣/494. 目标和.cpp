// 494. Ŀ���

//https://leetcode.cn/problems/target-sum/description/
// https://www.programmercarl.com/0494.%E7%9B%AE%E6%A0%87%E5%92%8C.html#%E5%8A%A8%E6%80%81%E8%A7%84%E5%88%92
class Solution {
public:
// dp[i]����������Ϊi�ķ�����
// ��������������Ϊx��������Ϊy���������ţ���x+y = sum(nums),x-y = target
// �������̵ã�x = (sum(nums)+target)/2
// ����ֻ��Ҫ�ҵ��ж����ַ������Դ�������ѡ�����ɸ�Ԫ��ʹ�����ǵĺ͵���(target + sum(nums)) / 2����
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(int i = 0; i<nums.size(); i++) sum+=nums[i];
        if(target>sum || target<0-sum) return 0;
        if((sum+target)%2==1) return 0;
        int bagsize = (sum+target)/2;
        
        vector<int> dp(bagsize+1, 0);
        dp[0] = 1;
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = bagsize; j>=nums[i]; j--)
            {
                // �������Ϊ���Ҳ�ȡ��i����+��ȡ��i��������i������СΪnums[i],��ȡ��֮��װ��������Ҳ����֮ǰ�ı������Ѿ�װ��j-nums[i]��
                dp[j] = dp[j] + dp[j-nums[i]];
            }
        }

        return dp[bagsize];
    }
};
