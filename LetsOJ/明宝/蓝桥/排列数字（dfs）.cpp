#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

const int N = 10;
int n = 0;
int path[N];
bool st[N];

void dfs(int m)
{
	if (m == n)// ���ս�������
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d ", path[i]);
		}
		puts("");
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (!st[i])
		{
			path[m] = i;
			st[i] = true;
			dfs(m + 1);
			st[i] = false;// �ָ��ֳ�
		}
	}
}

int main()
{
	cin >> n;
	dfs(0);
	return 0;
}