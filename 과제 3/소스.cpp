#include <iostream>
using namespace std;

int sum(int n)
{
	int s = 0;
	if (n == 0) return s;
	else
	{
		cout << "정수를 입력하세요. :";
		cin >> s;
		return s + sum(n - 1);
	}
}

int main()
{
	int n;
	cout << "정수의 갯수를 입력하세요. :";
	cin >> n;
	sum(n);
	cout << "정수의 합은 : " << sum(n);
}