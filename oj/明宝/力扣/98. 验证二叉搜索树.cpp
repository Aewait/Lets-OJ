//leetcode 98. ��֤����������
//https://leetcode.cn/problems/validate-binary-search-tree/description/
//��������¼���� https://www.programmercarl.com/0098.%E9%AA%8C%E8%AF%81%E4%BA%8C%E5%8F%89%E6%90%9C%E7%B4%A2%E6%A0%91.html#%E9%80%92%E5%BD%92%E6%B3%95

// �����鰴��������洢���������Ϊ���������飬�����
    void traverse(TreeNode* cur, vector<int>& v)
    {
        if(cur == NULL) return;
        traverse(cur->left, v);
        v.push_back(cur->val);
        traverse(cur->right, v);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        traverse(root, v);
        for(int i = 0; i<v.size()-1; i++)
        {
            if(v[i]>=v[i+1])
                return false;
        }
        return true;
    }
    
// �ݹ鷨������һ��������¼������������������ж���һ�����Ƿ�ȼ�¼������
    long long maxVal = LONG_MIN;
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;

        bool left = isValidBST(root->left);
        if(root->val > maxVal) 
            maxVal = root->val;
        else
            return false;
        bool right = isValidBST(root->right);

        return left && right;
    }
