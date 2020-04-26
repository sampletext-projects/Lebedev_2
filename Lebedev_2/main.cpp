#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Автор: Лебедев П.В. (УМЛ-112)\n";
	cout << "Программа для вычисления функции" << endl;

	//Установка точности вывода
	cout << setprecision(2) << setiosflags(ios::fixed);

	for (double x = -1; x <= 1; x += 0.1)
	{
		double result = 1;
		int t = 2;
		for (int i = 1; i <= 8; i++)
		{
			result *= (x - t) / (x - (t - 1));
			t *= 2;
		}
		cout << "f(" << x << ") = " << result << "\n";
	}

	system("pause");
	return 0;
}
