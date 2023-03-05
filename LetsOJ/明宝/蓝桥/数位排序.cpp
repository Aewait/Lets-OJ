#define _CRT_SECURE_NO_WARNINGS

// ��������������λ֮�Ͳ�ͬʱ, ����λ�ͽ�С������ǰ��, ����λ֮�����ʱ, ����ֵС������ǰ�档
//����, 2022 ���� 409 ǰ��, ��Ϊ 2022 ����λ֮���� 6, С�� 409 ����λ ֮�� 13 ��
//����, 6 ���� 2022 ǰ��, ��Ϊ���ǵ���λ֮����ͬ, �� 6 С�� 2022 ��
//����������n, m, ���ʶ� 1 ��n �������ַ�������ʱ, ���ڵ�m ����Ԫ ���Ƕ��� ?

// sort+lambda��д
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int fun(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	vector<int> v;
	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
	}
	sort(v.begin(), v.end(), [](int a, int b) {return (fun(a) < fun(b)) || (fun(a) == fun(b) && a<b); });
	cout << v[m - 1] << endl;

	return 0;
}
