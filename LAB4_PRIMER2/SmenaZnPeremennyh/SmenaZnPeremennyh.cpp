#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b; //, c;//
	cout << "Vvedi peremennuyu a = " << endl;
	cin >> a;
	cout << "Vvedi b = " << endl;
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	//Dop peremennaya:
	//c = a;
	//a = b;
	//b = c;
	cout << "Смененные значения двух переменных" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}