#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n; // n - количество векторов
    int sumX = 0, sumY = 0, sumZ = 0;
    for (int i = 0; i < n; ++i) // каждому вектору присваиваем значения координат x, y, z
    {
        int x, y, z;
        cin >> x >> y >> z;
        sumX += x; // sumX - сумма координат X
        sumY += y; // sumY - сумма координат Y
        sumZ += z; // sumZ - сумма координат Z
    }
    if (sumX == 0 && sumY == 0 && sumZ == 0) 
    {
        cout << "YES"; // состояния покоя
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
