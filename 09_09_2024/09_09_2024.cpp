#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите a и b для вычисления через enter: \n";
    int a, b, c, d, e, f; //создание целочисленых
    cin >> a;
    cin >> b;
    c = (a + b); //сложения
    d = (a - b); //вычитания
    e = (a * b); //умножение
    f = (a / b); //деление
    cout << "\nРезультат сложения: " << c;
    cout << "\nРезультат вычисления: " << d;
    cout << "\nРезультат умножения: " << e;
    cout << "\nРезультат сокращения: " << f;

    return 0;
}