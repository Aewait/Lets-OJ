//ͳ�ƻ���
#include<iostream>
using namespace std;
bool  ispalindrome(string str)
{   //˫ָ���жϻ���
    int left=0;
    int right=str.size()-1;
    while(left<right)
    {
        if(str[left]!=str[right])
            return false;
        ++left;
        --right;
    }
    return true;
}
int main()
{
    string str1,str2,tmp;
    cin>>str1>>str2;
    tmp=str1;//��str1���ַ�������
    int len=str1.size()+1;
    int count=0;
    for(int i=0;i<len;i++)
    {
        str1=tmp;//ÿ�β����ַ���ʱ����ԭstr1�ַ���
        str1.insert(i,str2);
        if(ispalindrome(str1))//�жϲ�����Ƿ����
        {
            count++;//����
        }
    }
    cout<<count<<endl;
    return 0;
} 
