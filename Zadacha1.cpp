#include <iostream>
using namespace std;
int main()
{
	int n, m, a; // n - длина площади, m - ширина площади, a - сторона квадратной плитки
	cin >> n >> m >> a;
	cout << ((n + a) / a) * ((m + a) / a); // (n + a ) / a - количество плиток в длину, (m + a) / a - количество плиток в ширину
	return 0;
}
