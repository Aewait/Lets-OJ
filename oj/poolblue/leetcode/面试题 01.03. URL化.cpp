//https://leetcode.cn/problems/string-to-url-lcci/
// ������ 01.03. URL��
class Solution {
public:
    string replaceSpaces(string S, int length) {
    //���õ��������
     int fillidx=S.size()-1;//�����ʵ�ַ��������λ��
     for(int i =length-1;i>=0;--i)//�����һ���ַ���ʼ����
     {
         if(S[i]==' ')//�����ո񣬾Ͳ����ַ�
         {
              S[fillidx]='0';
              S[fillidx-1]='2';
              S[fillidx-2]='%';
               fillidx -=3;//�ѱ����ʵ�ַ�����λ����ǰ�ƶ�����λ��
         }
         else
         {
             S[fillidx]=S[i];//�����ַ�������ͨ��������ʵ�ַ���λ��
             --fillidx;//��ǰ�ƶ�һ��λ��
         }
     }
     S = S.substr(fillidx+1);
    return S;
    }
};

