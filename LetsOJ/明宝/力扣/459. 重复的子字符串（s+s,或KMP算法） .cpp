//459. �ظ������ַ�����s+s,��KMP�㷨�� 
//����һ���ǿյ��ַ��� s ������Ƿ����ͨ��������һ���Ӵ��ظ���ι��ɡ�
//����: s = "abab"
//���: true
//����: �����Ӵ� "ab" �ظ����ι��ɡ�

class Solution {
public:
	// ����һ��ƴ��s+s����������s���ǵð�s+s�ĵ�һλ�����һλɾ������Ȼһ�����ҵ�s+s�е�sѽ��
//    bool repeatedSubstringPattern(string s) {
//        string newS = s+s;
//        newS.erase(newS.begin());
//        newS.erase(newS.end()-1);
//        if(newS.find(s)!=std::string::npos)
//            return true;
//
//        return false;
//    }

// ��������KMP���鳤�ȼ�ȥ���ͬǰ��׺�ĳ����൱���ǵ�һ�����ڵĳ��ȣ�Ҳ����һ�����ڵĳ��ȣ����������ڿ��Ա���������˵�������������������ڵ�ѭ����
    void getNext(int* next, const string &s)
    {
        int j = 0; 
        next[0] = 0;
        for(int i = 1; i<s.size(); i++)
        {
            while(j>0 && s[i]!=s[j])
            {
                j = next[j-1];
            }
            if(s[i]==s[j])
                j++;
            next[i] = j;
        }
    }
    bool repeatedSubstringPattern(string s) {
        if(s.size() == 0)
            return 0;
        
        int next[s.size()];
        getNext(next, s);

        int len = s.size();
        if(next[len-1]!=0 && len%(len-next[len-1]) == 0)// �ܱ����� 
            return true;
        return false;
    }
};
