//https://leetcode.cn/problems/palindrome-permutation-lcci/
//������ 01.04. ��������
class Solution {
public:
    bool canPermutePalindrome(string s) {
    int len =s.size();
    int count[128]={0};
         for(auto e:s)//�����ַ������м���
        {   
            count[e]++;
        }
        int odd=0;
         for(auto i:count)
        {   
            if(i%2==1)//���ַ�����С��������ֻ��һ���ַ�Ϊ�����Ż���
            odd++;
        }
         return odd<=1;
    }
}; 
