#include <iostream>
using namespace std;


int main()
{
	int n;
	cout << "������ ������ �Է��ϼ���. :";
	cin >> n;
	for (int i = 0; i < n ; i += 1)
	{
		cout << "Hello World!" << endl;
	}

	cout << "======================================================" << endl;

	int i = 0;
	while (i < n)
	{
		cout << "Hello World!" << endl;
		i = i + 1;
	}

	cout << "======================================================" << endl;

	i = 0;
	do
	{
		cout << "Hello World!" << endl;
		i = i + 1;
	} while (i < n);
}