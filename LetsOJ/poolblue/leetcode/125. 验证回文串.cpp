//https://leetcode.cn/problems/valid-palindrome/
//125. ��֤���Ĵ� 
class Solution {
public:
    bool isPalindrome(string s) {
    string pd;
    for(auto ch : s)//�����ַ���
    {
       if(isalnum(ch))//����Ƿ�0-9��a-z��A-Z���ֻ���ĸ
       {
           pd+=tolower(ch);//����Ǵ�дת��ΪСд��
       }
    }
    int len=pd.size();
    //˫ָ��
    int left=0;
    int right=len-1;
    while(left<right)
    {
        if(pd[left]!=pd[right])//�������ȣ�����false
        {
        return false;
        }
        ++left;
        --right;
     }
     return true;//��������������true
    }
};
