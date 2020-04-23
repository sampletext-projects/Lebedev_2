#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Автор: Лебедев П.В. (УМЛ-112)\n";
	cout << "Программа для вычисления функции" << endl;
	
	for (int x = -10; x <= 10; x++)
	{
		double chisl = 1;
		double znamen = 1;
		for (int i = 2; i <= 8; i += 2)
		{
			//проход чётных множителей
			chisl *= x / 10. - i;
		}
		for (int i = 1; i <= 8; i += 2)
		{
			//проход нечётных множителей
			znamen *= x / 10. - i;
		}
		double result = chisl / znamen;
		cout << "f(" << x / 10. << ") = " << result << "\n";
	}

	system("pause");
	return 0;
}
