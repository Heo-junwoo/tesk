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
	cout << "정수1을 입력하세요 :";
	cin >> x;
	cout << "정수2를 입력하세요 :";
	cin >> y;
	cout << "정수의 합 = " << sum(x, y);
}