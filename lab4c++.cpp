#include <windows.h>
#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES 
#define M_PI
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i,n;
    float s = 0,k=1;
    cout << "Введите количество повторений ";
    cin >> n;
    for (i = 1; i < n; i++) {
        s = s + pow(-1, i-1) * (1/(2*(i-1) + 1));
        k = pow(2 * i, 2) / (pow(2 * i, 2) - 1);
    }
    if (abs(M_PI - 4 * s) < abs(M_PI - k*2)) {
        cout<<"Формула Валлиса точнее";
    }

    else {
        cout << "Формула Грегори точнее";
    }

}

