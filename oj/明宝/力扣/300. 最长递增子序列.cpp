//300. �����������

//https://leetcode.cn/problems/longest-increasing-subsequence/
//https://www.programmercarl.com/0300.%E6%9C%80%E9%95%BF%E4%B8%8A%E5%8D%87%E5%AD%90%E5%BA%8F%E5%88%97.html#%E7%AE%97%E6%B3%95%E5%85%AC%E5%BC%80%E8%AF%BE

class Solution {
public:
// dp[i]��ʾ��i��β�ĵ������鳤��
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        
        vector<int>dp (nums.size(), 1);// ��ʼ������Ҫע�⣡���ٰ����Լ����Գ�ʼ����1
        int res = 0;
        // j<i && nums[j]<nums[i]�ŷ�������
        for(int i = 1; i<nums.size(); i++)
        {
            for(int j = 0; j<i; j++)
            {
                if(nums[j]<nums[i])
                {
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            // cout<<dp[i]<<" ";
            res = max(res, dp[i]);// ȡ����������
        }
        return res;

    }
};
