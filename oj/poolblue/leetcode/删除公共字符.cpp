//https://www.nowcoder.com/practice/f0db4c36573d459cae44ac90b90c6212?tpId=85&&tqId=29868&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking 
#include iostream
#include string
using namespace std;

int main()
{
     ע�����ﲻ��ʹ��cin���գ���Ϊcin�����ո�ͽ����ˡ� 
     oj��IO�����ַ������ʹ��getline��
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    
     ʹ�ù�ϣӳ��˼����str2ͳ���ַ����ֵĴ���
    int hash[256] ={0};
    for(int i=0;istr2.size();i++)
    {
        hash[str2[i]]++;
    }
     ����str1��str1[i]ӳ��hashtable��Ӧλ��Ϊ0�����ʾ����ַ��� 
     str2��û�г��ֹ�������+=��ret
    string ret;
    for(int i=0;istr1.size();i++)
    {
        if(hash[str1[i]] == 0)
        {
            ret += str1[i];
        }
    }
    cout retendl;
    return 0;
}


