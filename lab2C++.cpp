#include <windows.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x, y;
	cout << "Введите координату x";
	cin >> x;
	cout << "Введите координату y";
	cin >> y;
	if (x >= 2) {
		cout << "Точка принадлежит плоскости";
	}
	else if(pow((x + 2),2) + pow(y,2) < 4 && pow((x + 2), 2) + pow(y, 2) >= 1) {
		cout << "Точка принадлежит плоскости";
	}
	else {
		cout << "Точка не принадлежит плоскости";
	}

}

