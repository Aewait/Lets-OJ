#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
 
    int n=0;
    while(cin>>n)
    {
        
        vector<string> v(n);//��ǰ֪���ռ䣬ֱ�ӿ��ã�����Ƶ������
    
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        
        }
        //����
        sort(v.begin(),v.end());
        vector<bool> flag(n,true);//αɾ����������ɾ��Ԫ�أ�����Ԫ��ǰ�ƣ�Ч�ʽ���
                         //��ǰ���ã��ռ䲢����Ϊtrue�������˺�Ѳ�������������Ϊflase
        for(int i=0;i<n-1;i++)//n-1�������Խ��
        {   //����
            //������ͬĿ¼
            if(v[i]==v[i+1])
                flag[i]=false;
            else if(v[i].size()<v[i+1].size() && v[i+1][v[i].size()]=='/'
                    && v[i]==v[i+1].substr(0,v[i].size()))//��Ŀ¼
            {
                 flag[i]=false;
            }
                
        }
        for(int i=0;i<n;i++)
        {
            if(flag[i])
                cout<<"mkdir -p "<<v[i]<<endl;

        }
        cout<<endl;//�������������Ҫ�������
    }
    return  0;
}
