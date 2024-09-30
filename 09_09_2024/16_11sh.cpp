#include <iostream>
#include <cmath> //импортируем библиотеку cmath для математических вычислений

using namespace std;

int main() {
	double x, y, z, a, b; //присваеваем переменным чтобы число после точки считалось

	// Ввод значений x, y, z
	cout << "Введите значение x: ";
	cin >> x;
	cout << "Введите значение y: ";
	cin >> y;
	cout << "Введите значение z: ";
	cin >> z;

	// Вычисление a
	a = log(abs((y - sqrt(abs(x))) * (x - y / (z + x * x / 4))));

	// Вычисление b
	b = x - x * x / 6 + x * x * x * x * x / 120;

	// Вывод результатов
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
