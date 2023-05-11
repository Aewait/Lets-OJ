//https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-tree/
// 236. �������������������
//��һ��˼· ����ͨ���������� 
class Solution {
public:
    bool IsInSubTree(TreeNode* tree, TreeNode* x)
    {
        if(tree==nullptr)//��Ϊ�� 
        return false;
        if(tree==x)//�ҵ���� 
        return true;

        return  IsInSubTree(tree->left,x)//���������������� 
            ||  IsInSubTree(tree->right,x);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr)//��Ϊ�� 
        return nullptr;
        if(p==root ||q==root)//p ��q����һ���Ǹ��ڵ㣬����������� 
        return root;

        bool pinleft=IsInSubTree(root->left,p);//������������p 
        bool pinright=!pinleft;

        bool  qinleft=IsInSubTree(root->left,q);//������������q 
        bool qinright =!qinleft;

        if((qinleft &&pinright)||(qinright && pinleft) )//q��p������������������rootΪ������� 
         return root;

         else if(qinleft &&pinleft)//�����������������ݹ���� 
         return lowestCommonAncestor(root->left,p,q);

        else if(qinright &&pinright)//�����������������ݹ���� 
          return lowestCommonAncestor(root->right ,p,q);

        else
           return nullptr;
    }
};

