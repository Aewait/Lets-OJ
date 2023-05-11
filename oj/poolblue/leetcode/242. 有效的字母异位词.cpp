//https://leetcode.cn/problems/valid-anagram/ 
class Solution {
public:
    bool isAnagram(string s, string t) {
     if(s.size()!=t.size())
        return false;

    vector<int> table(26,0);//����ӳ���
    for(auto& ch :s )
    {
        table[ch-'a']++;//ӳ���һ���ַ�����������ĸ�����м���
    }
    for(auto& ch2 :t)
    {
        table[ch2-'a']--;//�����ڶ����ַ��������м����ݼ�
        if(table[ch2-'a']<0)//������С���㣬֤����ĸ��ƥ��
        return false;
    }
    return true;
   
    }
};
