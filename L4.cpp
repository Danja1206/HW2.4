#include <iostream>
#include <vector>
#include <list>
#include "Task1.h";
#include "Task2.h";
using namespace std;

void L1()
{
	vector<int> first{ -52, -31, -27, -15, 0, 23, 31, 68, 76, 95 };
	list<int> second{ -9, -5, -3, -1, 2, 4, 6, 8, 9 };
	output(first);
	insert_sorted(first, 1);
	output(first);
	output(second);
	insert_sorted(second, 0);
	output(second);
}

void L2()
{
	const int count = 50;

	vector<double> analogSignal(count);
	vector<int> digitalSignal(count);

	generateAnalogSignal(analogSignal);
	copy(analogSignal.begin(), analogSignal.end(), digitalSignal.begin());

	cout << "Аналоговый сигнал:" << endl;
	output(analogSignal);
	cout << endl;
	cout << "Цифровой сигнал:" << endl;
	output(digitalSignal);
	cout << endl;
	cout << "Ошибка преобразования сигнала: " << checkSingnalConversionError(analogSignal, digitalSignal) << endl;
}
int main()
{
	setlocale(0, "RUS");
	L1();
	L2();
	return 0;


}
