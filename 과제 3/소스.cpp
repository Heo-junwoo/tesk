#include <iostream>
using namespace std;

int sum(int n)
{
	int s = 0;
	if (n == 0) return s;
	else
	{
		cout << "������ �Է��ϼ���. :";
		cin >> s;
		return s + sum(n - 1);
	}
}

int main()
{
	int n;
	cout << "������ ������ �Է��ϼ���. :";
	cin >> n;
	sum(n);
	cout << "������ ���� : " << sum(n);
}