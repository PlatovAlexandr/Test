#include <iostream>
#include <cmath> // для получения натурального логарифма (log(a) в С++ = ln(a))
using namespace std;
int main()
{
	int k, l; // k - число под степенью, l - результат степени
	float n; //n - степень
	cin >> k >> l;
	n = log(l) / log(k); // logk(l) = ln(l)/ln(k) т.к. не существует конкретной формулы для логарифма
	if ((int) n != n ) // Если целочисленний тип (int) равен дробной (float)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
		cout << n - 1; // n-1, т.к. в данной задаче la (степень) начинается с единицы
	}
	return 0;
}
