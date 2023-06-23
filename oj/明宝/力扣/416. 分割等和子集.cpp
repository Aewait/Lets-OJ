//416. �ָ�Ⱥ��Ӽ�

//https://leetcode.cn/problems/partition-equal-subset-sum/description/
// https://www.programmercarl.com/0416.%E5%88%86%E5%89%B2%E7%AD%89%E5%92%8C%E5%AD%90%E9%9B%86.html#_416-%E5%88%86%E5%89%B2%E7%AD%89%E5%92%8C%E5%AD%90%E9%9B%86
class Solution {
public:
// ��01����˼·��
// dp[i]��ʾ����Ϊi��װ�µ������Ʒ��ֵ��������Ʒ�����ͼ�ֵһ�£�Ϊ����Ԫ��
// ����ͱ�ɣ����������͵�һ�룬�����Ϊtarget����01���������dp[target]����������ֵ�Ƿ�==target������������ܷ��Ϊtarget��
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i<nums.size(); i++)
            sum+=nums[i];

        if(sum%2==1) return false;
        int target = sum/2;
        // �ܺͲ������20000���������ֻ��Ҫ����һ�룬����10001��С�Ϳ�����
        vector<int>dp (10001, 0);
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = target; j>=nums[i]; j--)
            {
                dp[j] = max(dp[j], dp[j-nums[i]]+nums[i]);
            }
        }

        if(dp[target]==target)
            return true;
        
        return false;

    }
};
