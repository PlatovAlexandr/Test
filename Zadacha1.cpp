#include <iostream>
using namespace std;
int main()
{
	int n, m, a; // n - длина площади, m - ширина площади, a - сторона квадратной плитки
	cin >> n >> m >> a;
	cout << ((n + a - 1) / a) * ((m + a - 1) / a); // (n + a - 1) / a - количество плиток в длину, (m + a - 1) / a - количество плиток в ширину
	return 0;
}
