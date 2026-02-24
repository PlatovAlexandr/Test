#include <iostream>
using namespace std;
int main()
{
	int a, b, n, i, j; // n - результат деления
	cin >> a >> b;
	long long facta = 1; // facta - факториал а
	long long factb = 1; // factb - факториал b
	for (i = 1; i <= a; ++i)
	{
		facta *= i;
	}
	for (j = 1; j <= b; ++j)
	{
		factb *= j;
	}
	cout << ((factb / facta) % 10);
	return 0;
}
