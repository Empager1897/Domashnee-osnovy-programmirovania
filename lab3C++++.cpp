#include <math.h>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x,Sh=0,fac=1;
	int e;
	cout << "Введите число х ";
	cin >> x;
	cout << "Введите точность расчёта ";
	cin >> e;
	for (int i = 0; i <= e; i++) {
		for (int k = 1; k <= 2 * i + 1; k++) {
			fac = fac * k;
		}
		Sh = Sh + pow(x, 2 * i + 1) / fac;
		
	}
	cout << "Sh=" << Sh;
}

