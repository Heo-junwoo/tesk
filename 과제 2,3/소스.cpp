#include <iostream>
using namespace std;

void sum(int n)
{
	int s = 0;
	for (int i = 0; i < n ; i = i + 1)
	{
		int x;
		cout << "������ �Է��ϼ���. :";
		cin >> x;
		s = s + x;
	}
	cout << "������ ���� :" << s;
}

int main()
{
	int n;
	cout << "������ ������ �Է��ϼ���. :";
	cin >> n;
	sum(n);
}