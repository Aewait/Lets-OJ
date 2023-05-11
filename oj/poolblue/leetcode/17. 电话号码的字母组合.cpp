//https://leetcode.cn/problems/letter-combinations-of-a-phone-number/
//17. �绰�������ĸ���
class Solution {
    //�����绰���ְ������ַ�����ӳ��
    string  _numToStr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
public:                        
    void _letterCombine(string digits,size_t di ,string combineStr,vector<string>& retV)
    {  
        if(di==digits.size())//n���������������ǰ��ϷŽ����鲢������һ��
        {
            retV.push_back(combineStr);
            return;
        }
       //�������ַ���ת��Ϊ����
       int num= digits[di]-'0';//"234"-"2"-"3"-"4"
       string str= _numToStr[num];//'abc'
       for(auto ch:str)
      {                                 //��һ�㲻Ӱ����һ��
             _letterCombine(digits,di+1,combineStr+ch,retV);//һ��һ��ݹ飬�ֱ���ϣ�������һ��
      }
    }                                
    vector<string> letterCombinations(string digits) {
      vector <string> retV;
      //���ǿ��ַ���ʱ
      if(digits.empty())
        return retV;
      size_t di=0;
      string str;
      _letterCombine(digits,di,str,retV);//���еݹ����
      return retV;
    }
};
