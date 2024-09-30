#include <iostream>
using namespace std;

int main() {
	double a; //присваеваем переменной чтобы число после точки считалось
	setlocale(LC_ALL, "Russian"); 
	cout << "Введите число a: "; //получаем данные от пользователя
	cin >> a;

	double zxc = a * a; // создал переменные "zxc" и "zx"  которые вычисляют формулу a^4 = (a^2) * (a^2)
	double zx = zxc * zxc;

	cout << "a^4 = " << zx << endl; //вывод

	return 0;
}
