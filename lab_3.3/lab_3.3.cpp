// Lab_03_3.cpp
// < Ілюшин Роман >
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= -8)
		y = -R;
	else
		if (-8 < x && x <= -R)
			y = -8 - (R / (R + 8)) * (x + 8);
		else
			if (-R < x && x <= R)
				y = -sqrt(pow(R, 2) - pow(x, 2));
			else
				if (R < x && x <= 5)
					y = 2 / 5 * (x - R);
				else
					y = 2;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}