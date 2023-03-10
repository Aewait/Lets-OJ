#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// ����һ��
//const int N = 20;
//char g[N][N];
//bool col[N], dg[N], udg[N];// �У��Խ��ߣ����Խ���
//int n;
//
//void dfs(int m)
//{
//	if (n == m)
//	{
//		for (int i = 0; i < n; i++) puts(g[i]);
//		puts("");
//		return; 
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (!col[i] && !dg[i + m] && !udg[i - m + n])
//		{
//			g[m][i] = 'Q';
//			col[i] = dg[i + m] = udg[i - m + n] = true;
//			dfs(m + 1);
//			col[i] = dg[i + m] = udg[i - m + n] = false;
//			g[m][i] = '.';
//		}
//	}
//}

// ����������ԭʼ�ط���ÿ��λ��
const int N = 20;
int n;
char g[N][N];
bool col[N], row[N], dg[N], udg[N];

void dfs(int x, int y, int s)// ��ǰλ�ã��ʺ����Ŀ
{
	if (y == n)
	{
		x++;
		y = 0;
	}
	// �����ˣ�������
	if (x == n)
	{
		if (s == n)
		{
			for (int i = 0; i < n; i++)
				puts(g[i]);
			puts("");
		}
		return;
	}
	// ���Żʺ�
	dfs(x, y + 1, s);
	// �Żʺ�
	if (!col[x] && !row[y] && !dg[x + y] && !udg[x - y + n])
	{
		g[x][y] = 'Q';
		col[x] = row[y] = dg[x + y] = udg[x - y + n] = true;
		dfs(x, y + 1, s+1);
		col[x] = row[y] = dg[x + y] = udg[x - y + n] = false;
		g[x][y] = '.';
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			g[i][j] = '.';
		}
	}
	dfs(0, 0, 0);
	return 0;
}