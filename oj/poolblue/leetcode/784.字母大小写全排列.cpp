//https://leetcode.cn/problems/letter-case-permutation/ 
class Solution {
public:
   void dfs(string &s,int pos,vector<string>& res)
    {   //���ݷ�
        while(pos<s.size() && isdigit(s[pos]))//���ַ�����������������֣������++
        {
            pos++;
        }
        if(pos==s.size())
        {
         res.push_back(s);
         return;
        }

        s[pos] ^=32;//�任��Сд
        dfs(s,pos+1,res);
         s[pos] ^=32;//�任��Сд
        dfs(s,pos+1,res);
      
    }
    vector<string> letterCasePermutation(string s) {
    vector<string> res;
    dfs(s,0,res);

    return res;
    }
};
