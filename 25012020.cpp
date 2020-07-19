#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double x, a, b, y;
	cin >> x >> a >> b;
	if (a >= b) {
		if (sqrt(a - b) < x)
			y = a * pow(x, 3) + b * log(abs(2 * x));
		else if (sqrt(a - b) >= x)
			y = sqrt(a + sin(2 * x)) - exp(abs(3 * x));
		cout << "y= " << y << endl;
	}
	else cout << "error";
	return 0;

}
/*SetConsoleOutputCP(1251);
	double a, b;
	double e=1e-5; //0.00001
	a = 0.3333333333;
	b = 1.0/3;
	if (abs(b - a) < e)
	{
		cout << "Yes";
	}
	else
	cout << "No";
	return 0;*/

	/*SetConsoleOutputCP(1251);
		double a, b;
		a = 24.994;
		b = 24.998;
		if (abs(b - a) < 0.00001)
		{
			cout << "Yes";
		}
		else
		cout << "No";
		return 0;*/

		/*int a, b, c; // вивести максимальне з 3 чисел
			cin >> a >> b >> c;
			int max = a > b ? a > c ? a : c : b > c ? b : c;
			cout << max;
			return 0;*/

			/*int a, b, c; // вивести максимальне з 3 чисел
				cin >> a >> b >> c;
				int max = (a > b && a > c) ? a : b > c ? b : c;
				cout << max;
				return 0;*/


				/*int a, b, c; // вивести максимальне з 3 чисел
					cin >> a >> b >> c;
					int max = a > b ? a : b;
					max = max << c ? c:max;
					cout << max;
					return 0;*/
					/*SetConsoleOutputCP(1251); // тринарна операція. Те саме що і нижче, але коротше
						int a, b;
						cin >> a >> b;
						cout << (a > b ? a : b);

						return 0;*/

						/*SetConsoleOutputCP(1251);
							int a, b;
							cin >> a>> b;
							if (a > b)
							{
							cout << a;
							}
							else if (a<b)
							{
								cout << b;
							}
							else if (a == b)
							{
								cout << "равны";
							}
							return 0;*/