#include <iostream>
using namespace std;

int sum(int x, int y)
{
	return x + y;
}

int main()
{
	int x;
	int y;
	cout << "����1�� �Է��ϼ��� :";
	cin >> x;
	cout << "����2�� �Է��ϼ��� :";
	cin >> y;
	cout << "������ �� = " << sum(x, y);
}