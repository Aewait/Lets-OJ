#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {

    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    string output("");
    if(s1.size()>s2.size())
        s1.swap(s2);//�Զ̵��ַ���Ϊǰ
    for(int i=0;i<s1.size();i++)//���������ַ����������ַ�����Ϊ��ʼ��Ȼ��ͬʱ��ʼ����ַ��Ƿ���ȣ�����򲻶Ϻ��ƣ�
                                 //�����Ӵ����ȣ��������˵����������Ϊ�����Ӵ���ֹ�ˣ����������ˣ������Ƚϳ���ά�����ֵ���ɡ�
    {
        for(int j=0;j<s2.size();j++)
        {
            int length=0;
            int x=i,y=j;
            while(x<s1.size() &&y<s2.size()&& s1[x]==s2[y])//�ҵ�����Ӵ�����
            {
                x++;
                y++;
                length++;
            }
            if(output.size()< length)//��������Ӵ�
            {
                output=s1.substr(i,x-i);
            }
        }
    }
    cout<<output<<endl;
    
   return 0;
}
