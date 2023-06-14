//376. �ڶ�����

//https://leetcode.cn/problems/wiggle-subsequence/
// https://www.programmercarl.com/0376.%E6%91%86%E5%8A%A8%E5%BA%8F%E5%88%97.html#%E6%80%9D%E8%B7%AF-1-%E8%B4%AA%E5%BF%83%E8%A7%A3%E6%B3%95

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int preDiff = 0; 
        int curDiff = 0;
        int result = 1;// ��¼��ֵ����������Ĭ���������ұ���һ����ֵ
        for(int i = 0; i<nums.size()-1; i++)
        {
            curDiff = nums[i+1] - nums[i];
            if((preDiff>=0 && curDiff<0) || (preDiff<=0 && curDiff>0))
            {
                result++;

                preDiff = curDiff;// ���������������¶���ƽ�£����Է����жϷ�ֵ��ʱ��Ÿ���
            }
        }
        return result;
    }
};
