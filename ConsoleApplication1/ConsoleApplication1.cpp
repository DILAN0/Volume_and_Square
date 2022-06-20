#include <cmath>
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL,"RUS");
	double a, b, c, V, S;
	cout << "Введите a,b,c: ";
	cin >> a >> b >> c;
	V = a * b * c;
	S = 2 * (a * b + b * c + a * c);
	cout << "Объем: " << V << " " << "Площадь: " << S;
}
