//https://www.luogu.com.cn/problem/CF1509A
//���� n �����ų�һ�У�����������ڵ��� u �� v ��ƽ����Ϊ����������Ϊ������ �� �Ͼ� �� �ġ�
#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;

int main()
{
	int arr[2005], t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] % 2 == 1)
				cout << arr[i] << " ";
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i] % 2 == 0)
				cout << arr[i] << " ";
		}
	}
	return 0;
}