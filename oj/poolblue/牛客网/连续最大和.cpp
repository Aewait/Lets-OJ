//��������
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int  n=0;
    int number=0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)//��ÿ��Ԫ�ز�������
    {  
        cin >> number;
        v.push_back(number);
     }
    int maxsum = 0;//��¼����
    int sum = 0;//��¼��ǰ��
    for (auto num : v)//����
    {
        sum += num;
        if (sum < num)//����ͱȵ�ǰ���ֻ�С��֤��������ǰ����Ԫ���޹�
        {
            sum = 0;//����
            sum += num;//���¼��ϵ�ǰ���֣����������ж�
        }
        if (sum > maxsum)//����������ͣ����������
            maxsum = sum;
    }
    cout << maxsum << endl;

    return 0;
} 
