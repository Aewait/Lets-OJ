#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n=0;
    while(cin>>n)
    {  getchar();// ע�⣺�������һ�е�����֮�󣬱���Ҫ�ٽ����¸���֮��Ŀո��޷�ֱ�ӻ�ȡ��һ��
        
        
        string name;
        for(int i=0;i<n;i++)//�����ռ�������
        {   
            
           getline(cin,name);
            names.push_back(name);
        }
        for(auto m:names)// ����һ�����������ҵ�','���ߡ� ��ʱ��˫����
                              // �������
        {
            if(m.find(',')!=string::npos|| m.find(' ') != string::npos)
                cout<<"\""<<m<<"\"";//ʹ��ת���ַ���ӡ˫����
            else
               cout<<m;
            if(m!=names.at(names.size()-1))// ע�⣺���һ������֮��û�У�
                cout<<", ";
        }
        cout<<endl;//����
    }
  return 0;
}
