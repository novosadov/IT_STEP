#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "");	
	b:
	float a;
	cout << "Введите сумму в неденоминированных рублях." << endl;
	cin >> a;
	a = a / 10000;
	cout << "Сумма в деноминированных рублях = " << a <<" рублей"<< endl;
	system("pause");
	system("cls");
	goto b;
}
