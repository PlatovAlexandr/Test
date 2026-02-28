#include <iostream>
using namespace std;
int main()
{
	unsigned long long n, m, a, Kolvo; 
	cin >> n >> m >> a;
	Kolvo = ((n + a - 1) / a) * ((m + a - 1) / a);
	cout << Kolvo;
	return 0;
}
