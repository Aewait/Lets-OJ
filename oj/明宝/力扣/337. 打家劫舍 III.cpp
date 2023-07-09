//337. ��ҽ��� III

//https://leetcode.cn/problems/house-robber-iii/description/
//https://www.programmercarl.com/0337.%E6%89%93%E5%AE%B6%E5%8A%AB%E8%88%8DIII.html#%E6%80%9D%E8%B7%AF 
 
class Solution {
public:
// ����dp��dp[0]����͵���ڵ�����ֵ��dp[1]����͵���ڵ�����ֵ
    int rob(TreeNode* root) {
        vector<int>res = robTree(root);
        return max(res[0], res[1]);
    }
    // 0��͵ 1����͵
    vector<int> robTree(TreeNode* cur)
    {
        if(cur==nullptr) return {0, 0};
        // �ϲ�Ҫ���²�����ݣ����Ժ������
        vector<int> left = robTree(cur->left);
        vector<int> right = robTree(cur->right);
        // ͵cur����ô�Ͳ���͵���ҽڵ㡣
        int num0 = cur->val + left[1] + right[1];
        // ��͵cur����ô����͵Ҳ���Բ�͵���ҽڵ㣬��ȡ�ϴ�����
        int num1 = max(left[0], left[1]) + max(right[0], right[1]);
        return {num0, num1};
    }
};
