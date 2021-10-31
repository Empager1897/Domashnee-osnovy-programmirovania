#include <windows.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i = 10000,k=2,s=0;
    for (i; i < 100000; i++) {
        if(i/10000==i%10&&i/1000%10==i/10%10){
            for (k; k <= i / 2; k++) {
                if (i % k == 0) {
                    break;
                }
            }
            cout << i << " Простой палиндром";
        }
        s++;
        if (s == 10) {
            break;
        }
    }
}

