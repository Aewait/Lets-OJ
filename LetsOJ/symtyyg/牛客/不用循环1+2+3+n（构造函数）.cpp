#define _CRT_SECURE_NO_WARNINGS 
//https://www.nowcoder.com/practice/7a0da8fc483247ff8800059e12d7caf1
// ��1+2+3+...+nҪ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж����
// ����n�ι��캯��
class Sum
{
public:
	Sum()
	{
		_ret += _i;// ����ѭ��
		++_i;
	}

	static int GetRet()
	{
		return _ret;
	}
private:
	static int _i;
	static int _ret;
};

int Sum::_i = 1;
int Sum::_ret = 0;

class Solution {
public:
	int Sum_Solution(int n) {
		//Sum a[n];// ����n�ι��캯��
		Sum* p = new Sum[n];
		return Sum::GetRet();
	}
};