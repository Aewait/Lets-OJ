//https://leetcode.cn/problems/is-unique-lcci/
//������ 01.01. �ж��ַ��Ƿ�Ψһ
class Solution {	
public:
    bool isUnique(string astr) {
       int count [26]={0};
     //ͳ�ƴ���
     for( auto ch :astr)
     {
         count[ch-'a']++;
     }

     for(size_t i=0;i<astr.size();i++)
     {
         if(count[astr[i]-'a']>1)
          return false;
         
     }
     return true;

    }
};
