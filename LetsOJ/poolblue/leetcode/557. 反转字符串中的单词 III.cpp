//https://leetcode.cn/problems/reverse-words-in-a-string-iii/
//557. ��ת�ַ����еĵ��� III
class Solution {
public:
    string reverseWords(string s) {
    int len=s.size();//��¼����
    int i=0;//����
    while(i<len)//�����ַ���
   {  int start=i;
      while(i<len && s[i]!=' ')//������ǿո����������,Ҫ���Ʋ�Ҫ�����ַ�������
      {
          i++;
      }
      int left=start;
      int right=i-1;
      while(left<right)//ԭ�ؽ��н�����ת����
      {
          swap(s[left],s[right]);
          ++left;
          --right;
      }
      while(i<len && s[i]==' ')//�������������Ʋ�Ҫ�����ַ�������
      {
          i++;
      }
       
   }
   return s;
    }
};
