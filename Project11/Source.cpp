#include "Polynom.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string str1, str2;
	int x;
	while (true)
	{
		cout << "Введите первый полином вида k0x^p0+k1x^p1+..+knx^pn:" << endl;
		cin >> str1;
		Polynom poly1;
		poly1.parse(str1);
		poly1.normalize();
		cout << "Введите второй полином вида k0x^p0+k1x^p1+..+knx^pn:" << endl;
		cin >> str2;
		Polynom poly2;
		poly2.parse(str2);
		poly2.normalize();
		cout << "Сумма:" << endl;
		Polynom poly3 = poly1 + poly2;
		poly3.printAll();
		cout << endl;
		cout << "Разность:" << endl;
		poly3 = poly1 - poly2;
		poly3.printAll();
		cout << endl;
		cout << "Умножение:";
		poly3 = poly1 * poly2;
		poly3.printAll();
		cout << endl;
		cout << "Введите x:" << endl;
		cin >> x;
		cout << "Значение полинома 1 при x равно:" << endl;
		cout << poly1.calculate(x) << endl;
		cout << "Значение полинома 2 при x равно:" << endl;
		cout << poly2.calculate(x) << endl;

	}

	system("pause");
}