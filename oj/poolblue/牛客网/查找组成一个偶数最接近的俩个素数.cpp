//https://www.nowcoder.com/practice/f8538f9ae3f1484fb137789dec6eedb9?tpId=37&&tqId=21283&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking
//����������Ҫ�ж�������������ʾ����1�ͱ������ܱ�������������ͨ��ѭ���������ж�һ�����Ƿ�Ϊ�������������������Ӧ�ô����м��λ�ÿ�ʼ�����߲��ҡ�
#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
             return false;
        }
    }
    return true;
}
int main() {
    int num;
    while (cin >> num) {
       for(int i=num/2;i>=0;i--)
       {
        if(is_prime(i)  && is_prime(num-i))
        {
            cout<<i<<endl<<num-i<<endl;
            break;
        }
       }
        
    }
    return 0;
}
 
