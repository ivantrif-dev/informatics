

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    float x, y;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите значение x: ";
    cin >> x;
    cout << endl;
    cout << "Введите значение y: ";
    cin >> y;
    float pi = 3.141592;
    double r, s;
    r = (1.0 / tan(pi * x)) - (1.0 / cos(y));
    s = log(pow(2, x));
    cout << "R = " << r << endl << "S = " << s << endl;
    double c;
    c = (r + s + (abs(r - s))) / 2;
    cout << "C = " << c << endl;
    cout << "Нажмите Enter для завершения программы";
    cin.ignore();
    cin.get();
}

