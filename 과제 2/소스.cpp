#include <iostream>
using namespace std;

void sum(int n)
{
	int s = 0;
	for (int i = 0; i < n ; i = i + 1)
	{
		int x;
		cout << "정수를 입력하세요. :";
		cin >> x;
		s = s + x;
	}
	cout << "정수의 합은 :" << s;
}

int main()
{
	int n;
	cout << "정수의 갯수를 입력하세요. :";
	cin >> n;
	sum(n);
}