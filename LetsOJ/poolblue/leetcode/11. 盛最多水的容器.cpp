//https://leetcode.cn/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
    //˫ָ��
    int left =0;
    int right=height.size()-1;
    int res=0;
    //˫�����б���
     while(left<right)
     {   //����ˮ�ĸ߶��ɶ̰����
         //�Ҷ̰����м�ݼ�����Ϊ�������еݼ������һ����С���̰����еݼ���������ܻ�����
        res= height[left] > height[right] ?
        max(res,(right-left)*height[right--]):
        max(res,(right-left)*height[left++]);
     }
     return res;
    }
};
