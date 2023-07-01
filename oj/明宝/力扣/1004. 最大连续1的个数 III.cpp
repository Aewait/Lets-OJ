//1004. �������1�ĸ��� III

// https://leetcode.cn/problems/max-consecutive-ones-iii/description/
class Solution {
public:
// ��Ŀת��Ϊ���ҳ�һ����������飬������������������� K �� 0 
    int longestOnes(vector<int>& nums, int k) {
        int res=0, zeros=0, left=0;
        for(int right=0; right<nums.size(); right++)
        {
            if(nums[right]==0)
                zeros++;
            while(zeros>k)
            {
                if(nums[left++]==0)
                    zeros--;
            }
            res = max(res, right-left+1);
        }
        return res;
    }
};
